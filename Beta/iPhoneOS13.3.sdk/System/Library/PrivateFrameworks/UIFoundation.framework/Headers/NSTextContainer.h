/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLayoutManager, NSTextLayoutManager, UIView;

@protocol NSTextContainerView;

@interface NSTextContainer : NSObject

{
    NSLayoutManager *_layoutManager;
    UIView<NSTextContainerView> *_textView;
    struct CGSize _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int oldAPI:1;
        unsigned int _reserved:8;
    } _tcFlags;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
}

@property (nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic, readonly, getter=isSimpleRectangularTextContainer) _Bool simpleRectangularTextContainer;
@property (nonatomic) _Bool widthTracksTextView;
@property (nonatomic) _Bool heightTracksTextView;
@property (nonatomic, readonly) long long layoutOrientation;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (id)textLayoutManager;
- (id)textView;
- (struct CGPoint)textContainerOrigin;
- (struct NSEdgeInsets)textContainerInsetsForView:(id)arg1;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (void)_commonInit;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (struct NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;
- (void)_resizeAccordingToTextView:(id)arg1;
- (double)minimumLineFragmentWidth;
- (void)setLayoutOrientation:(long long)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)replaceLayoutManager:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setContainerSize:(struct CGSize)arg1;
- (struct CGSize)containerSize;
- (id)attributesForExtraLineFragment;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (_Bool)_containerObservesTextViewFrameChanges;
- (void)_containerTextViewFrameChanged:(id)arg1;

@end
