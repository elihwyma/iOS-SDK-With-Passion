/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/Swift-Protocol.h>

@class NSData, NSNumber, NSString, NSURLCache, SSBag, SSURLRequestProperties;

@protocol SSURLSessionManagerDelegate <Swift>

@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) SSBag *bag;
@property (nonatomic, readonly) _Bool isURLBagRequest;
@property (nonatomic, readonly) NSData *rawResponseData;
@property (nonatomic, readonly) SSURLRequestProperties *requestProperties;
@property (nonatomic, readonly) _Bool shouldDisableCellular;
@property (nonatomic, readonly) _Bool shouldRequireCellular;
@property (nonatomic, readonly) _Bool shouldSetCookies;
@property (nonatomic, readonly) NSData *sourceAppAuditTokenData;
@property (nonatomic, readonly) NSString *sourceAppBundleID;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *URLCacheID;

@end
