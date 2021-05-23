/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICAppearanceInfo;

@interface ICPreviewDeviceInfo : NSObject

{
    double _imageSize;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
}

@property (nonatomic) double imageSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;

+ (id)previewDeviceInfoForPreviewImage:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithImageSize:(double)arg1 scale:(double)arg2;
- (id)initWithImageSize:(double)arg1 scale:(double)arg2 appearanceInfo:(id)arg3;
- (id)deviceInfoFromAddingAppearanceInfo:(id)arg1;

@end
