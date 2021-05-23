/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteractionAssistant.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, _UITextServiceSession;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant

{
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextChecker *_textChecker;
    unsigned long long _options;
    _Bool _shouldDelayActivatingSelectionView;
    _Bool _hadCaretSelectionBeforeTap;
    NSString *_wordBeforeTap;
    struct CGRect _caretBeforeTap;
}

@property (retain, nonatomic) NSString *wordBeforeTap;
@property (nonatomic) struct CGRect caretBeforeTap;
@property (nonatomic) _Bool hadCaretSelectionBeforeTap;
@property (nonatomic, readonly) UITapGestureRecognizer *singleTapGesture;
@property (nonatomic, readonly) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic, readonly) UILongPressGestureRecognizer *forcePressGesture;
@property (nonatomic) _Bool shouldDelayActivatingSelectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)selectionChanged;
- (id)initWithView:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)addGestureRecognizersToView:(id)arg1;
- (_Bool)shouldEnqueueObserverUpdates;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (void)showSelectionView;
- (_Bool)overrideGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)containerIsPlainStyleAtom;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (_Bool)containerAllowsSelectionTintOnly;
- (void)selectWord;
- (_Bool)containerIsBrowserView;
- (_Bool)containerIsAtom;
- (_Bool)wantsLinkInteraction;
- (Class)selectionInteractionClass;
- (id)_asText;
- (Class)loupeInteractionClass;
- (_Bool)requiresImmediateUpdate;
- (_Bool)containerAllowsSelection;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (_Bool)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)updateActivatingSelectionView;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)showTextStyleOptions;
- (void)hideTextStyleOptions;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)lookup:(id)arg1 withRange:(struct _NSRange)arg2 fromRect:(struct CGRect)arg3;
- (void)lookup:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOverflow;

@end
