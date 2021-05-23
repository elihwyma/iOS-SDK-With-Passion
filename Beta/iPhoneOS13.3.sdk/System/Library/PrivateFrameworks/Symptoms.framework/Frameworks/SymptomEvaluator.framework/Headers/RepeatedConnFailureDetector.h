/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface RepeatedConnFailureDetector : NSObject

{
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_flush;
- (void)noteSuspectFlow:(id)arg1 withOwner:(id)arg2;
- (void)_excessiveConnFailuresDetectedOn:(id)arg1 owner:(id)arg2;

@end
