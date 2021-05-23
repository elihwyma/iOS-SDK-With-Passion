/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@class TSWPPadding;

@protocol TSWPColumnMetrics

@property (nonatomic, readonly) struct CGSize adjustedInsets;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool alwaysStartsNewTarget;
@property (nonatomic, readonly) _Bool shrinkTextToFit;
@property (nonatomic, readonly) _Bool columnsAreLeftToRight;
@property (nonatomic, readonly) double textScaleFactor;

- (unsigned short)widthForColumnIndex:bodyWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)gapForColumnIndex:bodyWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)positionForColumnIndex:bodyWidth:outWidth:outGap: /* Error: Ran out of types for this method. */;

@end
