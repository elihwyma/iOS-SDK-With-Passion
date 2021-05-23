/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoEditImportProperties : NSObject

{
    long long _baseEXIFOrientation;
    double _baseDuration;
}

@property (nonatomic, readonly) long long baseEXIFOrientation;
@property (nonatomic, readonly) double baseDuration;

+ (id)importPropertiesWithEXIFOrientation:(long long)arg1;
+ (id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2;

@end
