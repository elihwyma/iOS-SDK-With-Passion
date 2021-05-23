/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLRevGeoPlaceInfo : NSObject

{
    _Bool _hasArea;
    NSString *_placeName;
    double _minimumArea;
    double _maximumArea;
}

@property (copy, nonatomic, readonly) NSString *placeName;
@property (nonatomic, readonly) _Bool hasArea;
@property (nonatomic, readonly) double minimumArea;
@property (nonatomic, readonly) double maximumArea;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceName:(id)arg1;
- (void)addPlaceInfoArea:(double)arg1;

@end
