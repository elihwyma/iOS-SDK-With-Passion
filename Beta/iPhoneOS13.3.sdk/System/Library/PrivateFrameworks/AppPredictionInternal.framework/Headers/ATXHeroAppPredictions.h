/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, _PASLock;

@interface ATXHeroAppPredictions : NSObject

{
    _PASLock *_lock;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)donateHeroAppPredictionsWithBundleIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePredictionsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)predictionCount;
- (unsigned long long)getPredictionIndexForBundleIdentifier:(id)arg1;
- (void)setGuardedDataNow:(id)arg1;
- (void)_invalidatePredictionsIfNeeded;

@end
