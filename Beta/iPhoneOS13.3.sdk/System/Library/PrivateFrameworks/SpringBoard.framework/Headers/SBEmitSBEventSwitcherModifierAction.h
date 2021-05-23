/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSDictionary;

@interface SBEmitSBEventSwitcherModifierAction : SBSwitcherModifierAction

{
    unsigned long long _eventType;
    NSDictionary *_payload;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) NSDictionary *payload;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2;

@end
