/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOStorefrontImagery : NSObject

{
    unsigned long long _identifier;
    unsigned int _buildId;
    unsigned short _bucketId;
    unsigned long long _timestamp;
    double _groundAltitude;
    struct GEOOrientedPosition _position;
    NSArray *_cameras;
    unsigned int _dataFormatVersion;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) unsigned short bucketId;
@property (nonatomic, readonly) unsigned int buildId;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) double groundAltitude;
@property (nonatomic, readonly) struct GEOOrientedPosition position;
@property (nonatomic, readonly) NSArray *cameras;
@property (nonatomic, readonly) unsigned int dataFormatVersion;

- (id)init;
- (id)initWithPhotoPosition:(id)arg1;

@end
