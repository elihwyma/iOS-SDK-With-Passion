/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppLayout, UIGestureRecognizer;

@interface SBFluidSwitcherGesture : NSObject <Swift>

{
    CDUnknownBlockType _eventProvider;
    long long _state;
    SBAppLayout *_selectedAppLayout;
    UIGestureRecognizer *_gestureRecognizerForStudyLog;
    long long _type;
}

@property (nonatomic, setter=_setState:) long long state;
@property (retain, nonatomic, setter=_setSelectedAppLayout:) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic, setter=_setGestureRecognizerForStudyLog:) UIGestureRecognizer *gestureRecognizerForStudyLog;
@property (nonatomic, readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)gestureEvent;
- (id)studyLogData;
- (id)initWithType:(long long)arg1 eventProvider:(CDUnknownBlockType)arg2;

@end
