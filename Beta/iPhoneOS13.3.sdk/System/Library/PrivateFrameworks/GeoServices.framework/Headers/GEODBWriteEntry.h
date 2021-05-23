/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GEODBWriteEntry : NSObject

{
    struct _GEOTileKey _key;
    NSData *_data;
    unsigned int _edition;
    unsigned int _set;
    unsigned int _provider;
    NSString *_etag;
}

@property (nonatomic, readonly) struct _GEOTileKey key;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int edition;
@property (nonatomic, readonly) unsigned int set;
@property (nonatomic, readonly) unsigned int provider;
@property (nonatomic, readonly) NSString *etag;

- (id)initWithKey:(struct _GEOTileKey)arg1 data:(id)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;

@end
