/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSData, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface _PUPhotoEditSnapshot : NSObject

{
    long long _workImageVersion;
    PHAdjustmentData *_adjustmentData;
    NSData *_imageData;
    NSData *_baseImageData;
}

@property (nonatomic) long long workImageVersion;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *baseImageData;

- (id)_copyData:(id)arg1;

@end
