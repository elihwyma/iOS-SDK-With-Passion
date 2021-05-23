/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableData;

@interface GEONetworkDataReader : NSObject

{
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)readString;
- (id)allData;
- (_Bool)readUnsignedShort:(unsigned short *)arg1;
- (void)appendNetworkData:(id)arg1;
- (_Bool)readUnsignedInt:(unsigned int *)arg1;
- (id)readData:(unsigned int)arg1;
- (void)markOffset;
- (void)seekToMarkedOffset;
- (_Bool)hasUnreadData;

@end
