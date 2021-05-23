/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUITracklistColumnData : NSObject

{
    NSArray *_columns;
    double _interColumnSpacing;
    double _leftEdgeInset;
    double _rightEdgeInset;
}

@property (copy, nonatomic) NSArray *columns;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) double leftEdgeInset;
@property (nonatomic) double rightEdgeInset;

- (id)_initSKUITracklistColumnData;
- (void)enumerateColumnsForTrack:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithRepresentativeTrack:(id)arg1;
- (void)adjustColumnsToFitWidth:(double)arg1;
- (id)columnForIdentifier:(long long)arg1;
- (void)enumerateColumnsForHeader:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)viewElementsForTrack:(id)arg1 columnIndex:(long long)arg2;

@end
