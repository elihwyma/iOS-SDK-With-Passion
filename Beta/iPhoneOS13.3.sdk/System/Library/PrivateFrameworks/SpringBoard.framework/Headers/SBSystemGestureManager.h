/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <Swift>

{
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    NSSet *_gesturesPreventedByStylus;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    _Bool _systemGesturesDisabledForAccessibility;
}

@property (nonatomic, readonly, getter=isAnyTouchGestureRunning) _Bool anyTouchGestureRunning;
@property (nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility;
@property (retain, nonatomic) NSSet *gesturesPreventedByStylus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mainDisplayManager;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)windowForSystemGestures;
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg1;
- (void)_evaluateEnablement;
- (id)_initWithDisplayIdentity:(id)arg1;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_systemGestureChanged:(id)arg1;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;

@end
