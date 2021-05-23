/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardMenuView.h>

@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView

{
    NSMutableArray *m_inputModes;
    NSArray *m_inputSwitcherItems;
    _Bool m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
    _Bool _messagesWriteboardFromSwitcher;
    _Bool _fileReportFromSwitcher;
    _Bool _showsSwitches;
    CDUnknownBlockType m_finishSplitTransitionBlock;
}

@property (nonatomic, readonly) NSArray *inputModes;
@property (nonatomic) _Bool messagesWriteboardFromSwitcher;
@property (nonatomic) _Bool fileReportFromSwitcher;
@property (nonatomic) _Bool showsSwitches;
@property (copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock;

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)fadeWithDelay:(double)arg1;
- (void)selectInputMode:(id)arg1;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (_Bool)_isHandBiasSwitchVisible;
- (unsigned long long)defaultSelectedIndex;
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;
- (void)returnToKeyboardIfNeeded;
- (void)selectRowForInputMode:(id)arg1;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (id)defaultInputMode;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)_reloadInputSwitcherItems;
- (id)_itemWithIdentifier:(id)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)_segmentControlValueDidChange:(id)arg1;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)didFinishSplitTransition;
- (void)toggleKeyboardFloatingPreference;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (_Bool)shouldShow;
- (void)didShow;
- (void)willFade;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;
- (void)switchAction;
- (_Bool)didHitDockItemWithinTypingWindow;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isForDictation:(_Bool)arg4 tapAction:(CDUnknownBlockType)arg5;

@end
