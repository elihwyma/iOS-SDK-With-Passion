/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@interface UIActivityItemImageRep : NSObject

{
    id _asset;
    CDUnknownBlockType _thumbnailProvider;
    CDUnknownBlockType _dataProvider;
}

@property (retain, nonatomic) id asset;
@property (copy, nonatomic) CDUnknownBlockType thumbnailProvider;
@property (copy, nonatomic) CDUnknownBlockType dataProvider;

+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(CDUnknownBlockType)arg2 dataProvider:(CDUnknownBlockType)arg3;

- (id)data;
- (id)thumbnail;

@end
