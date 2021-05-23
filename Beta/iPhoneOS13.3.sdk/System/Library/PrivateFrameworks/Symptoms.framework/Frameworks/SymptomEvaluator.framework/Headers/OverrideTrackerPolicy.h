/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OverrideTrackerPolicy : NSObject

{
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)useFullActivityBitmaps;
- (id)maxConnectionPolicyForTarget:(id)arg1;
- (id)maxRRCTimePolicyForTarget:(id)arg1;

@end
