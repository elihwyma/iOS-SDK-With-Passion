/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPRep.h>

@class NSString, SXAXCustomRotor, SXTextTangierInteractiveCanvasController;

@protocol SXTextTangierRepAccessibilityDataSource;

@interface SXTextTangierFlowRep : TSWPRep

{
    id <SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;
    SXAXCustomRotor *_linkRotor;
    SXAXCustomRotor *_headingsRotor;
    SXTextTangierInteractiveCanvasController *_icc;
    struct CGRect _frameInCanvas;
}

@property (retain, nonatomic) SXAXCustomRotor *linkRotor;
@property (retain, nonatomic) SXAXCustomRotor *headingsRotor;
@property (weak, nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic) struct CGRect frameInCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;

- (void)dealloc;
- (id)storage;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)siblings;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct CGRect)accessibilityFrameForScrolling;
- (_Bool)accessibilitySupportsTextSelection;
- (id)accessibilityPreviousTextNavigationElement;
- (id)accessibilityNextTextNavigationElement;
- (id)interactiveCanvasController;
- (id)supportedCustomRotors;
- (id)itemsForCustomRotor:(id)arg1;
- (id)sxaxSupportedEditRotorActions;
- (id)sxaxNameForEditRotorAction:(id)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (_Bool)updateFromVisualPosition;
- (Class)wpEditorClass;
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1 isTail:(_Bool)arg2 selectionType:(int)arg3;
- (id)orderedSiblings;
- (_Bool)forceTiling;
- (_Bool)preventClipToColumn;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;

@end
