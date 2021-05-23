/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVCollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface _TVGridViewFlowLayout : _TVCollectionViewFlowLayout

{
    struct TVCellMetrics _cellMetrics;
}

@property (nonatomic) struct TVCellMetrics cellMetrics;

- (id)init;
- (double)expectedLineSpacing;

@end
