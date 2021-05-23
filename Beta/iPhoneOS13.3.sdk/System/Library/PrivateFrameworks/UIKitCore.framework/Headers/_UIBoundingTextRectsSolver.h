/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutManager, NSTextContainer;

@interface _UIBoundingTextRectsSolver : NSObject

{
    struct _NSRange _range;
    struct CGRect _firstRect;
    struct CGRect _lastRect;
    struct CGRect _middleRect;
    struct CGRect _totalRect;
    struct _NSRange _firstGlyphRange;
    struct _NSRange _lastGlyphRange;
    struct _NSRange _middleGlyphRange;
    struct _NSRange _totalGlyphRange;
    _Bool _calculated;
    _Bool _unifyRects;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (nonatomic, readonly) struct CGRect firstLineRect;
@property (nonatomic, readonly) struct CGRect bodyRect;
@property (nonatomic, readonly) struct CGRect lastLineRect;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly) NSArray *rects;

- (id)description;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2 unifyRects:(_Bool)arg3;
- (void)_calculate;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (void)_calculateTotalRect;

@end
