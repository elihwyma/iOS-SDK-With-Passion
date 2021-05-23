/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface _NTKTransientPhoto : NSObject

{
    UIImage *_image;
    struct CGRect _originalCrop;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect originalCrop;

@end
