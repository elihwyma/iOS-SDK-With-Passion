/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject

{
    _Bool _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSMutableSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

@property (copy, nonatomic) NSDate *clawEventTimestamp;
@property (nonatomic) _Bool didTriggerSOS;
@property (retain, nonatomic) NSMutableSet *participatingPressTypes;
@property (retain, nonatomic) NSMutableSet *activePressTypes;

- (id)init;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (void)noteSOSTriggered;
- (void)_publishLoggedData;
- (void)_resetLoggedData;

@end
