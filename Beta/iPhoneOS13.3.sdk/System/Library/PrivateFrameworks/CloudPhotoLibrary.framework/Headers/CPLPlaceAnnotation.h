/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface CPLPlaceAnnotation : NSObject

{
    NSNumber *_placeLevel;
    NSString *_placeName;
}

@property (copy, nonatomic) NSNumber *placeLevel;
@property (copy, nonatomic) NSString *placeName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
