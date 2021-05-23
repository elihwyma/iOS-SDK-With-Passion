/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSTextRange;

@protocol NSTextViewportElementProvider, NSTextViewportLayoutDelegate;

@interface NSTextViewportLayoutController : NSObject

{
    struct CGRect _viewportBounds;
    struct CGPoint _viewportOffset;
    NSTextRange *_viewportRange;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    _Bool _layoutIsValid;
    id <NSTextViewportLayoutDelegate> _delegate;
    id <NSTextViewportElementProvider> _elementProvider;
}

@property (weak) id <NSTextViewportLayoutDelegate> delegate;
@property (weak, readonly) id <NSTextViewportElementProvider> elementProvider;
@property (readonly) struct CGRect viewportBounds;
@property (readonly) NSTextRange *viewportRange;

- (void)dealloc;
- (id)initWithElementProvider:(id)arg1;
- (struct CGRect)viewport;
- (id)textViewportElementForLocation:(id)arg1;
- (id)textViewportElementsInRect:(struct CGRect)arg1;
- (id)textViewportElementAtPoint:(struct CGPoint)arg1;
- (void)layoutViewport;
- (double)relocateViewport:(id)arg1;
- (void)adjustViewport:(double)arg1;
- (void)enumerateTextViewportElementsInRect:(struct CGRect)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)locationAtPoint:(struct CGPoint)arg1;
- (void)addViewportLayoutObserver:(id)arg1;
- (void)removeViewportLayoutObserver:(id)arg1;

@end
