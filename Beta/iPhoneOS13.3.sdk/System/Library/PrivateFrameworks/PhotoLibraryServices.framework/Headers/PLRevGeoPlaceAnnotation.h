/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <Swift>

{
    int _placeLevel;
    NSString *_placeName;
}

@property (nonatomic) int placeLevel;
@property (retain, nonatomic) NSString *placeName;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;

@end
