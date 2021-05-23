/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLColorSpace : NSObject

{
    NSString *_colorSpaceName;
}

@property (copy, nonatomic) NSString *colorSpaceName;

+ (id)colorSpaceFromName:(id)arg1;
+ (id)commonColorSpace_sRGB;
+ (id)commonColorSpace_unspecified;
+ (id)commonColorSpace_displaySpace;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;

@end
