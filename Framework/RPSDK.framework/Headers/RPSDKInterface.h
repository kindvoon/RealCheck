//
//  RPSDKInterface.h
//  ALRealIdentity
//
//  Created by  Hank Zhang on 2019/11/1.
//  Copyright © 2019 Alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <RPSDK/RPConfiguration.h>
#import <RPSDK/RPResult.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `RPSDK` 实人认证 SDK 接口。
 */
NS_SWIFT_NAME(RPSDK)
@interface RPSDK : NSObject

/**
 实人认证初始化，建议应用启动时调用。
 */
+ (void)setup;

/**
 优先推荐使用此方法
 开始实人认证，使用默认 UI 配置，适用于纯 Native 的认证方案。支持认证基础方案列表如下：
 * RPBioOnly
 * RPBioOnlyPro
 * FVBioOnly
 * FDBioOnly
 
 认证方案介绍： https://help.aliyun.com/document_detail/127757.html
 支持引导页、隐私页、活体页，如果您的方案需要’拍证件照‘或者’手输身份证‘需求，则请使用 ’startWithVerifyToken：‘ 方法。

 @param verifyToken 实人认证流程的唯一标识，一般从接入方自己的服务端获取，有效时间 30 分钟。
 @param viewController 调用实人认证的视图控制器。
 @param completion 实人认证结果回调。
 */
+ (void)startByNativeWithVerifyToken:(NSString *)verifyToken
                      viewController:(UIViewController *)viewController
                          completion:(RPCompletion _Nullable)completion;

/**
 优先推荐使用此方法
 开始实人认证，可自定义 UI 配置，适用于纯 Native 的认证方案。支持认证基础方案列表如下：
 * RPBioOnly
 * RPBioOnlyPro
 * FVBioOnly
 * FDBioOnly
 
 认证方案介绍： https://help.aliyun.com/document_detail/127757.html
 支持引导页、隐私页、活体页，如果您的方案需要’拍证件照‘或者’手输身份证‘需求，则请使用 ’startWithVerifyToken：‘ 方法。

 @param verifyToken 实人认证流程的唯一标识，一般从接入方自己的服务端获取，有效时间 30 分钟。
 @param viewController 调用实人认证的视图控制器。
 @param configuration 实人认证配置。
 @param progress 实人认证过程回调。
 @param completion 实人认证结果回调。
 */
+ (void)startByNativeWithVerifyToken:(NSString *)verifyToken
                      viewController:(UIViewController *)viewController
                       configuration:(RPConfiguration *)configuration
                            progress:(RPProgress _Nullable)progress
                          completion:(RPCompletion _Nullable)completion;

/**
 开始实人认证，使用默认 UI 配置，适用于需要’拍证件照‘或者’手输身份证‘的认证方案， 支持方案列表如下：
 * RPBioID
 * RPBasic
 * RPManual
 
 认证方案介绍： https://help.aliyun.com/document_detail/127757.html

 @param verifyToken 实人认证流程的唯一标识，一般从接入方自己的服务端获取，有效时间 30 分钟。
 @param viewController 调用实人认证的视图控制器。
 @param completion 实人认证结果回调。
 */
+ (void)startWithVerifyToken:(NSString *)verifyToken
              viewController:(UIViewController *)viewController
                  completion:(RPCompletion _Nullable)completion;

/**
 开始实人认证，可自定义 UI 配置，适用于需要’拍证件照‘或者’手输身份证‘的认证方案， 支持方案列表如下：
 * RPBioID
 * RPBasic
 * RPManual

 认证方案介绍： https://help.aliyun.com/document_detail/127757.html

 @param verifyToken 实人认证流程的唯一标识，一般从接入方自己的服务端获取，有效时间 30 分钟。
 @param viewController 调用实人认证的视图控制器。
 @param configuration 实人认证配置。
 @param completion 实人认证结果回调。
 */
+ (void)startWithVerifyToken:(NSString *)verifyToken
              viewController:(UIViewController *)viewController
               configuration:(RPConfiguration *)configuration
                  completion:(RPCompletion _Nullable)completion;

/**
 废弃！！！  开始实人认证，使用指定的 H5 地址作为认证入口。 建议使用 startWithVerifyToken 接口，如不能满足需求可以咨询实人开发同学
 使用 UI 默认配置。

 @param url 实人认证流程的地址。
 @param viewController 调用实人认证的视图控制器。
 @param completion 实人认证结果回调。
 */
+ (void)startByURL:(NSString *)url
    viewController:(UIViewController *)viewController
        completion:(RPCompletion _Nullable)completion
DEPRECATED_MSG_ATTRIBUTE("建议使用 startWithVerifyToken 接口，如不能满足需求可以咨询实人开发或产品同学，计划于 2021.12.12 之后版本下线");

/**
 废弃！！！ 开始实人认证，使用指定的 H5 地址作为认证入口。建议使用 startWithVerifyToken 接口，如不能满足需求可以咨询实人开发同学

 @param url 实人认证流程的地址。
 @param viewController 调用实人认证的视图控制器。
 @param completion 实人认证结果回调。
 */
+ (void)startByURL:(NSString *)url
    viewController:(UIViewController *)viewController
     configuration:(RPConfiguration *)configuration
        completion:(RPCompletion _Nullable)completion
DEPRECATED_MSG_ATTRIBUTE("建议使用 startWithVerifyToken 接口，如不能满足需求可以咨询实人认证开发或产品，计划于 2021.12.12 之后版本下线");

@end

NS_ASSUME_NONNULL_END
