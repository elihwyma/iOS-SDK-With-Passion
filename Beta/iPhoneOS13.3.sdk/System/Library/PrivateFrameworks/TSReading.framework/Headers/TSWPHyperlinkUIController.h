/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDRep, TSWPChangeSession, TSWPEditingController, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPStorage, UIViewController;

@protocol TSWPHyperlinkHostRepProtocol;

@interface TSWPHyperlinkUIController : NSObject

{
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
    TSWPHyperlinkField *_hyperlinkField;
    TSWPStorage *_observedStorage;
    unsigned long long _hyperlinkUISessionID;
    TSWPEditingController *_cachedEditingController;
    TSWPChangeSession *_changeSession;
    NSString *_originalDisplayText;
    NSString *_editedDisplayText;
    NSString *_editedURLString;
    _Bool _removeHyperlink;
    _Bool _closingDocument;
    _Bool _shouldMaintainKeyboardWhenEndingSession;
}

@property (retain, nonatomic) NSString *editedDisplayText;
@property (retain, nonatomic) NSString *editedURLString;
@property (nonatomic, readonly) NSString *stringForURL;
@property (nonatomic, readonly) NSString *stringForDisplay;
@property (nonatomic, readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) UIViewController *viewControllerForPresenting;
@property (nonatomic, readonly) _Bool isCanvasInReadMode;
@property (nonatomic, readonly) TSWPEditingController *editingController;
@property (nonatomic) _Bool shouldMaintainKeyboardWhenEndingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedHyperlinkUIController;
+ (id)defaultTableView;

- (void)dealloc;
- (void)endUISession;
- (void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(_Bool)arg1;
- (int)p_UIState;
- (void)hideHyperlinkHighlight;
- (void)p_stopObservingStorage;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)visit;
- (void)startUISessionForHyperlinkField:(id)arg1 inRep:(id)arg2;
- (_Bool)hasOpenSessionForHyperlinkField:(id)arg1;
- (_Bool)hasStartedSession;
- (void)showHyperlinkHighlight;
- (void)p_selectHyperlinkField;
- (void)p_clearTextSelection;
- (_Bool)isDisplayingHyperlinkUI;
- (struct CGRect)p_viewBoundsForField;
- (void)p_initChangeSessionAuthorCreatedWithCommand:(id *)arg1;
- (_Bool)p_shouldSetCanvasSelectionWhenDismissing;
- (_Bool)p_shouldSetTextSelectionWhenDismissing;
- (void)i_openURLAction;

@end
