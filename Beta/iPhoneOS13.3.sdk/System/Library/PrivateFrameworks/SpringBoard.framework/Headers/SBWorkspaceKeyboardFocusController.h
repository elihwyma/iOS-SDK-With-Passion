/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringToken, NSHashTable, NSMutableArray, NSString, SBMainWorkspace;

@protocol BSInvalidatable;

@interface SBWorkspaceKeyboardFocusController : NSObject

{
    int _keyboardFocusPID;
    SBMainWorkspace *_workspace;
    NSHashTable *_observers;
    NSMutableArray *_redirections;
    NSMutableArray *_holdAssertions;
    id <BSInvalidatable> _keyboardFocusRule;
    id <BSInvalidatable> _compatibilityKeyboardFocusRule;
    BKSHIDEventDeferringToken *_keyboardFocusToken;
}

@property (retain, nonatomic) SBMainWorkspace *workspace;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *redirections;
@property (retain, nonatomic) NSMutableArray *holdAssertions;
@property (retain, nonatomic) id <BSInvalidatable> keyboardFocusRule;
@property (retain, nonatomic) id <BSInvalidatable> compatibilityKeyboardFocusRule;
@property (retain, nonatomic) BKSHIDEventDeferringToken *keyboardFocusToken;
@property (nonatomic) int keyboardFocusPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)processManager:(id)arg1 didSelectKeyboardFocusProcess:(id)arg2 deferringToken:(id)arg3;
- (id)initWithWorkspace:(id)arg1;
- (void)updateKeyboardFocusDeferringRules;
- (id)lockFocusToSpringBoardForReason:(id)arg1;
- (_Bool)_getSceneKeyboardFocusOverridePID:(int *)arg1 token:(id *)arg2;
- (void)_notifyObserversDidUpdateKeyboardFocusPID:(int)arg1 token:(id)arg2;
- (id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5;

@end
