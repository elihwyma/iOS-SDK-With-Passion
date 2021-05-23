/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSDictionary, NSString;

@interface IPAPhotoAdjustment : IPAAdjustment

{
    _Bool _enabled;
    NSString *_maskUUID;
    NSDictionary *_autoSettings;
}

@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSString *maskUUID;
@property (retain, nonatomic) NSDictionary *autoSettings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_debugDescriptionSuffix;

@end
