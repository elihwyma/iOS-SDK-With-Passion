/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutManager, NSOperationQueue, NSString, NSTextContainer, NSTextContentManager, NSTextViewportLayoutController;

@protocol NSTextLayoutManagerDelegate, NSTextLayoutManagerDelegatePrivate;

@interface NSTextLayoutManager : NSObject

{
    NSTextContentManager *_textContentManager;
    NSArray *_textContainers;
    NSTextViewportLayoutController *_viewportLayoutController;
    long long _applicationFrameworkContext;
    id <NSTextLayoutManagerDelegatePrivate> _delegate;
    NSLayoutManager *_companion;
    CDStruct_80f920e0 _lastTextContainerEntry;
    CDStruct_80f920e0 *_textContainerEntries;
    CDStruct_80f920e0 *_textContainerEntriesAccessHint;
    unsigned long long _textContainerEntriesSize;
    unsigned long long _textContainerEntriesCount;
    CDStruct_0f015c83 *_textLayoutSegments;
    CDStruct_0f015c83 *_textLayoutSegmentsAccessHint;
    CDStruct_0f015c83 *_softInvalidatedSegmentHead;
    unsigned long long _textLayoutSegmentsSize;
    unsigned long long _textLayoutSegmentsCount;
    _Bool _usesFontLeading;
    _Bool _limitsLayoutForSuspiciousContents;
    NSTextContainer *_templateTextContainer;
    NSOperationQueue *_layoutQueue;
}

@property (weak) id <NSTextLayoutManagerDelegate> delegate;
@property _Bool usesFontLeading;
@property _Bool limitsLayoutForSuspiciousContents;
@property (weak, readonly) NSTextContentManager *textContentManager;
@property (copy, readonly) NSArray *textContainers;
@property (retain) NSTextContainer *templateTextContainer;
@property (readonly) struct CGRect usageBoundsForLastTextContainer;
@property (retain) NSOperationQueue *layoutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (Class)viewportLayoutControllerClass;
+ (Class)companionLayoutManagerClass;

- (id)init;
- (void)dealloc;
- (void)synchronize;
- (void)replaceCharactersInRange:(id)arg1 withAttributedString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)textContainerForLocation:(id)arg1;
- (void)updateLayoutWithTextLayoutFragment:(id)arg1;
- (long long)applicationFrameworkContext;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)_commonInit;
- (void)setTextContentManager:(id)arg1;
- (void)_addTextContainerFromTemplate:(id)arg1;
- (struct CGRect)usageBoundsInTextContainerAtIndex:(long long)arg1;
- (id)enumerateTextLayoutFragmentsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_removeTextContainersUntilCondition:(CDUnknownBlockType)arg1;
- (void)ensureLayoutForBounds:(struct CGRect)arg1;
- (void)replaceCharactersInRange:(id)arg1 withElements:(id)arg2;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_hasLayoutForLocation:(id)arg1;
- (id)viewportLayoutController;
- (id)companionLayoutManager;
- (void)replaceTextContentManager:(id)arg1;
- (void)_removeTextContainer;
- (id)rangeForTextContainerAtIndex:(long long)arg1;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)ensureLayoutForRange:(id)arg1;
- (void)invalidateLayoutForRange:(id)arg1;
- (id)textLayoutFragmentForPosition:(struct CGPoint)arg1 inTextContainerAtIndex:(long long)arg2;
- (id)textLayoutFragmentForLocation:(id)arg1;
- (void)finalizeAndPushLastTextContainer;

@end
