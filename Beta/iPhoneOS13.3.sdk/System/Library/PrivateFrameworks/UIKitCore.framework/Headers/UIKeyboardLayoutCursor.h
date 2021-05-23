/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardLayoutStar.h>

@class NSArray, NSString, UIAlertController, UIKBTree, UILabel, UILexicon, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar

{
    UIKBTree *_indirectKeyboard;
    UIView *_selectionView;
    NSArray *_keyplaneKeys;
    long long _selectedKeyIndex;
    _Bool _ignoreEventsUntilPressEnds;
    UILexicon *_recentInputs;
    _Bool _disableTouchInput;
    _Bool _suppressOperations;
    UIKBTree *_cachedMultitapKeyplane;
    _Bool _cachedCanMultitap;
    UILabel *_dictationHelpLabel;
    _Bool _didVariantDelete;
    _Bool _isForwardingEvent;
    UIAlertController *_recentInputsAlert;
    NSString *_keyplaneBeforeDictation;
    long long _selectedKeyBeforeDictation;
    UIWindow *_focusWindow;
}

@property (nonatomic, readonly) UIKBTree *currentKey;
@property (retain, nonatomic) UIAlertController *recentInputsAlert;
@property (retain, nonatomic) NSString *keyplaneBeforeDictation;
@property (nonatomic) long long selectedKeyBeforeDictation;
@property (retain, nonatomic) UIWindow *focusWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setRenderConfig:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (unsigned long long)cursorLocation;
- (void)setCursorLocation:(unsigned long long)arg1;
- (_Bool)usesAutoShift;
- (_Bool)isAlphabeticPlane;
- (_Bool)isKanaPlane;
- (_Bool)diacriticForwardCompose;
- (_Bool)supportsContinuousPath;
- (id)keyViewAnimator;
- (void)alertDidDismiss;
- (void)setSelectedKeyIndex:(long long)arg1;
- (void)configureChildCollectionViewCellsIfNeeded;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)selectInitialKeyIfNecessary;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)updateDictationHelpString;
- (id)cacheTokenForKeyplane:(id)arg1;
- (void)setKeyplaneName:(id)arg1;
- (int)enabledStateForKey:(id)arg1;
- (int)activeStateForKey:(id)arg1;
- (void)updateRecentInputsKeyIfNecessary;
- (void)updateKeyplaneSwitchEdgeBiases;
- (void)updateStatesForGridSelection;
- (_Bool)refreshSelectedCellIfNecessaryForKey:(id)arg1;
- (void)didSelectRecentInputString:(id)arg1;
- (id)_keyplaneForKeyplaneProperties;
- (_Bool)isKeyplaneDisabledWithName:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (void)longPressAction;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (unsigned long long)variantCountForKey:(id)arg1;
- (long long)targetKeyIndexAtOffset:(struct CGPoint)arg1 fromKey:(id)arg2;
- (void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2;
- (void)deactivateKey:(id)arg1;
- (struct CGRect)selectionFrameForKeyIndex:(long long)arg1;
- (id)keyHitTestInSameRowAsCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (_Bool)canHandleEvent:(id)arg1;
- (_Bool)_handleMoveWithEvent:(id)arg1;
- (_Bool)_handleWheelChangedWithEvent:(id)arg1;
- (_Bool)_handleRemoteControlReceivedWithEvent:(id)arg1;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
- (_Bool)_handlePhysicalKeyDownWithEvent:(id)arg1;
- (void)runWithSuppressedActions:(CDUnknownBlockType)arg1;
- (void)showRecentInputsAlert;
- (_Bool)handleVisualDirectionalInput:(int)arg1;
- (void)clearVariantStateForKey:(id)arg1;
- (_Bool)canMultitap;
- (_Bool)handleLinearDirectionalInput:(int)arg1;
- (void)handleVariantDeleteIfNecessaryForKey:(id)arg1;
- (void)takeKeyAction:(id)arg1;
- (_Bool)shouldToggleKeyplaneWithName:(id)arg1;
- (void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1;
- (_Bool)_menuTapShouldExitVariants;
- (void)returnToKeyplaneAfterDictation;
- (_Bool)_isDirectionalHeading:(unsigned long long)arg1;
- (void)flushKeyCache:(id)arg1;
- (_Bool)shouldAllowCurrentKeyplaneReload;
- (_Bool)shouldMatchCaseForDomainKeys;
- (void)acceptRecentInputIfNecessary;
- (_Bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (_Bool)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (unsigned char)getHandRestRecognizerState;
- (_Bool)supportsEmoji;
- (_Bool)shouldUseDefaultShiftStateFromLayout;
- (_Bool)ignoresShiftState;
- (void)setDisableTouchInput:(_Bool)arg1;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (_Bool)shouldMergeKey:(id)arg1;
- (int)stateForCandidateListKey:(id)arg1;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (void)endMultitapForKey:(id)arg1;
- (_Bool)shouldDeactivateWithoutWindow;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;

@end
