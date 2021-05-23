/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKPhoto, UIImage;

@interface NTKCachedPhoto : NSObject

{
    UIImage *_image;
    NTKPhoto *_photo;
    long long _index;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NTKPhoto *photo;
@property (nonatomic, readonly) long long index;

- (_Bool)load;
- (id)initWithPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1 index:(long long)arg2;

@end
