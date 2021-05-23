/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@interface IPAAutoRegistryEntry : NSObject

{
    _Bool _persistable;
    Class _autoSettingsClass;
}

@property (retain, nonatomic) Class autoSettingsClass;
@property (nonatomic) _Bool persistable;

@end
