/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCBundleEntitlementsProviderResult : NSObject

{
    _Bool _inTrialPeriod;
    _Bool _isPurchaser;
    _Bool _isAmplifyUser;
    NSString *_bundlePurchaseID;
}

@property (nonatomic, readonly) NSString *bundlePurchaseID;
@property (nonatomic, readonly) _Bool inTrialPeriod;
@property (nonatomic, readonly) _Bool isPurchaser;
@property (nonatomic, readonly) _Bool isAmplifyUser;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundlePurchaseID:(id)arg1 inTrialPeriod:(_Bool)arg2 isPurchaser:(_Bool)arg3 isAmplifyUser:(_Bool)arg4;

@end
