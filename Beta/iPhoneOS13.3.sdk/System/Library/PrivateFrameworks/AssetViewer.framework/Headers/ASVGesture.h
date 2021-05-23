/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@protocol ASVGestureDataSource;

@interface ASVGesture : NSObject

{
    _Bool _firstTouchWasOnAsset;
    id <ASVGestureDataSource> _dataSource;
    MISSING_TYPE *_initialAssetLocationOnScreen;
    MISSING_TYPE *_latestAssetLocationOnScreen;
}

@property (weak, nonatomic) id <ASVGestureDataSource> dataSource;
@property (nonatomic) _Bool firstTouchWasOnAsset;
@property (nonatomic) MISSING_TYPE *initialAssetLocationOnScreen;
@property (nonatomic) MISSING_TYPE *latestAssetLocationOnScreen;

- (id)initWithDataSource:(id)arg1;
- (void)updateGesture;
- (void)finishGesture;

@end
