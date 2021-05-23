/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface _GEOPlaceDataPhotoInfo : NSObject

{
    struct CGSize _size;
    NSURL *_url;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSURL *url;

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;

- (id)initWithPhotoContent:(id)arg1;

@end
