/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutManager, NSOperationQueue, NSString, NSTextElement, NSTextLayoutManager, NSTextRange, NSTextStorage;

@interface NSTextLayoutFragment : NSObject

{
    NSTextLayoutManager *_textLayoutManager;
    NSTextElement *_textElement;
    NSTextRange *_rangeInElement;
    struct _NSRange _characterRange;
    unsigned long long _sourceVerticalDelta;
    unsigned long long _sourceRangeDelta;
    struct CGRect _sourceBoundingRect;
    struct CGRect _destinationBoundingRect;
    unsigned long long _animationType;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    double _destinationVerticalDelta;
    struct _NSRange _destinationGlyphRange;
    NSLayoutManager *_layoutManager;
    NSArray *_textLineFragments;
    NSOperationQueue *_layoutQueue;
    unsigned long long _state;
    struct CGPoint _layoutPoint;
    struct CGRect _layoutFragmentFrame;
}

@property (weak) NSTextLayoutManager *textLayoutManager;
@property struct CGPoint layoutFragmentFrameOrigin;
@property NSLayoutManager *destinationLayoutManager;
@property (retain) NSTextStorage *destinationTextStorage;
@property double destinationVerticalDelta;
@property struct _NSRange destinationGlyphRange;
@property struct CGRect destinationBoundingRect;
@property (weak, readonly) NSLayoutManager *layoutManager;
@property (readonly) struct _NSRange characterRange;
@property (readonly) struct CGRect sourceBoundingRect;
@property (readonly) struct CGRect destinationBoundingRect;
@property (readonly) unsigned long long animationType;
@property (copy) NSArray *textLineFragments;
@property unsigned long long state;
@property struct CGRect layoutFragmentFrame;
@property (weak) NSTextElement *textElement;
@property (weak, readonly) NSTextLayoutManager *textLayoutManager;
@property (readonly) NSTextRange *rangeInElement;
@property (retain) NSOperationQueue *layoutQueue;
@property (readonly) struct CGRect renderingSurfaceBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSTextRange *representedRange;
@property (readonly) struct CGSize layoutSize;
@property struct CGPoint layoutPoint;

+ (_Bool)supportsSecureCoding;
+ (id)layoutFragmentQueue;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layout;
- (void)_layout;
- (void)_setup;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (id)representedRangeAtPoint:(struct CGPoint)arg1;
- (id)initWithTextElement:(id)arg1 range:(id)arg2;
- (void)estimateSize;
- (void)invalidateLayout;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect)arg4;
- (void)drawAtPoint:(struct CGPoint)arg1 contentType:(unsigned long long)arg2;

@end
