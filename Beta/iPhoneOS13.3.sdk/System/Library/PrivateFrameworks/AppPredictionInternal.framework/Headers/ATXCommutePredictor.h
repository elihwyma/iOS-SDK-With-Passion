/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXPredictedTransitionsCache, NSString;

@protocol ATXLocationManagerProtocol;

@interface ATXCommutePredictor : NSObject

{
    ATXPredictedTransitionsCache *_cache;
    id <ATXLocationManagerProtocol> _manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)prewarmOnActivity:(id)arg1;
- (id)getNextTransitionOnActivity:(id)arg1;
- (id)initWithTransitionsCache:(id)arg1 locationManager:(id)arg2;

@end
