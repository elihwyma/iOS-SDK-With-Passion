/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <Swift>

{
    int _style;
    int _size;
    int _scale;
    NSNumber *_version;
    NSURL *_baseURL;
    NSURL *_localizationURL;
}

@property (nonatomic, readonly) int style;
@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) int scale;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSURL *localizationURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;

@end
