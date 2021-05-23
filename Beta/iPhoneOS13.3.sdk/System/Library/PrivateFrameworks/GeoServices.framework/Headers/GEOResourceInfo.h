/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResource, NSArray, NSData, NSString;

@interface GEOResourceInfo : NSObject

{
    GEOResource *_resource;
    NSArray *_equivalentResources;
    _Bool _allowResumingPartialDownload;
}

@property (nonatomic, getter=_allowResumingPartialDownload, setter=_setAllowResumingPartialDownload:) _Bool allowResumingPartialDownload;
@property (copy, nonatomic) NSArray *equivalentResources;
@property (nonatomic, readonly) GEOResource *resource;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSData *checksum;

- (id)description;
- (id)initWithResource:(id)arg1;

@end
