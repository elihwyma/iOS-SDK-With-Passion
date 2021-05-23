/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData, NSString, NSURL;

@interface GEOTileData : NSObject

{
    NSData *_data;
    NSURL *_fileURL;
    unsigned long long _cachedFileSize;
    long long _sandboxExtension;
    id _decodedRepresentation;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) id decodedRepresentation;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithDecodedRepresentation:(id)arg1;
- (void)encodeToXPCDictionary:(id)arg1;

@end
