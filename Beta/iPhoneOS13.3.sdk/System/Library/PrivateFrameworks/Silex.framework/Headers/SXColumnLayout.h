/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@protocol SXDocumentLayout;

@interface SXColumnLayout : NSObject <Swift>

{
    id <SXDocumentLayout> _documentLayout;
    long long _layoutWidth;
    double _leftMargin;
    double _rightMargin;
    long long _gutter;
    unsigned long long _numberOfColumns;
    double _columnWidth;
    long long _leftColumnOffset;
    long long _rightColumnOffset;
    double _leftInset;
    double _rightInset;
    double _minimumHeight;
    double _minimumViewportWidthForLooseLayout;
    double _leftScreenMargin;
    double _rightScreenMargin;
    double _contentScaleFactor;
    unsigned long long _layoutColumns;
    struct CGSize _constrainedViewportSize;
    struct CGSize _viewportSize;
}

@property (nonatomic, readonly) unsigned long long layoutColumns;
@property (nonatomic, readonly) struct CGSize constrainedViewportSize;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) id <SXDocumentLayout> documentLayout;
@property (nonatomic, readonly) long long layoutWidth;
@property (nonatomic, readonly) double leftMargin;
@property (nonatomic, readonly) double rightMargin;
@property (nonatomic, readonly) long long gutter;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) long long leftColumnOffset;
@property (nonatomic) long long rightColumnOffset;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumViewportWidthForLooseLayout;
@property (nonatomic, readonly) double leftScreenMargin;
@property (nonatomic, readonly) double rightScreenMargin;
@property (nonatomic, readonly) double contentScaleFactor;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)widthForColumnRange:(struct _NSRange)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3 ignoreViewportPadding:(unsigned long long)arg4;
- (id)columnLayoutForComponentBlueprint:(id)arg1 unitConverter:(id)arg2;
- (double)xPositionForColumnIndex:(long long)arg1 ignoreMargin:(unsigned long long)arg2 ignoreGutter:(unsigned long long)arg3 ignoreViewportPadding:(unsigned long long)arg4;
- (struct _NSRange)convertColumnRange:(struct _NSRange)arg1 minimumColumnLength:(long long)arg2;
- (id)initWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 layoutWidth:(double)arg3 documentLayout:(id)arg4 numberOfLayoutColumns:(unsigned long long)arg5 leftMargin:(double)arg6 rightMargin:(double)arg7 numberOfColumns:(unsigned long long)arg8 columnWidth:(double)arg9 leftScreenMargin:(double)arg10 rightScreenMargin:(double)arg11 contentScaleFactor:(double)arg12;

@end
