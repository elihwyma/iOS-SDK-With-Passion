/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ATXActionLOIBoost : NSObject

{
    NSDictionary *_boostDictionary;
}

+ (id)sharedInstance;
+ (double)decayRateWithScale:(double)arg1 distance:(double)arg2;

- (id)initWithBoostDictionary:(id)arg1;
- (double)boostForActionKey:(id)arg1;

@end
