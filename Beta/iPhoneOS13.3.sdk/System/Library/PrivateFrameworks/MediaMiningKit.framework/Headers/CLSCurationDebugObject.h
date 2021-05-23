/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface CLSCurationDebugObject : NSObject

{
    NSMutableArray *_stateHistory;
    unsigned long long _tentativeSectionStateHistoryLength;
    unsigned long long _stateAtBeginningOfTentativeSection;
    unsigned long long _state;
}

@property (readonly) unsigned long long state;
@property (readonly) NSArray *stateHistory;

+ (id)stringForState:(unsigned long long)arg1;

- (id)init;
- (id)dictionaryRepresentation;
- (id)timestamp;
- (void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)beginTentativeSection;
- (void)endTentativeSectionWithSuccess:(_Bool)arg1;

@end
