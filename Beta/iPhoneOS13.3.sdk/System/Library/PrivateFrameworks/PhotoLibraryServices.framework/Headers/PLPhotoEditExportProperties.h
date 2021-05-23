/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoEditExportProperties : NSObject

{
    long long _baseEXIFOrientation;
    double _baseDuration;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
}

@property (nonatomic, readonly) long long baseEXIFOrientation;
@property (nonatomic, readonly) double baseDuration;
@property (nonatomic, readonly) unsigned long long imageWidth;
@property (nonatomic, readonly) unsigned long long imageHeight;

+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3;
+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4;

@end
