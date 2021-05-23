/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject

{
    unsigned long long _urgency;
    NSMutableDictionary *_urgencies;
}

+ (id)sharedInstance;

- (unsigned long long)currentUrgency;
- (void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2;
- (void)ageUrgencies;
- (id)allUrgencies;
- (void)recomputeUrgency;
- (unsigned long long)urgencyForClient:(id)arg1;

@end
