/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSDictionary, NSSet;

@interface ATXPhoneWatchBundleIdMapper : NSObject

{
    NSSet *_blackListedWatchApps;
    NSSet *_sameBundleIdApps;
    NSDictionary *_phoneToWatch;
    NSDictionary *_watchToPhone;
    LSApplicationProxy *_mockApplicationProxy;
}

@property (retain, nonatomic) LSApplicationProxy *mockApplicationProxy;

- (id)init;
- (id)watchBundleIdForPhoneBundleId:(id)arg1;
- (id)phoneBundleIdForWatchBundleId:(id)arg1;
- (id)initWithAssetClass:(Class)arg1;

@end
