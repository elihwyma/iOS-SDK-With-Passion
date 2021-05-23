/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSIndexSet, NSString, SBHomeGestureArbiter;

@protocol SBHomeGestureParticipantDelegate;

@interface SBHomeGestureParticipant : NSObject <Swift>

{
    _Bool _ownsHomeGesture;
    long long _identifier;
    id <SBHomeGestureParticipantDelegate> _delegate;
    NSIndexSet *_trumpsAdditionalIdentifiers;
    SBHomeGestureArbiter *_arbiter;
}

@property (weak, nonatomic) SBHomeGestureArbiter *arbiter;
@property (nonatomic) _Bool ownsHomeGesture;
@property (nonatomic) long long identifier;
@property (weak, nonatomic) id <SBHomeGestureParticipantDelegate> delegate;
@property (copy, nonatomic) NSIndexSet *trumpsAdditionalIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithIdentifier:(long long)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
