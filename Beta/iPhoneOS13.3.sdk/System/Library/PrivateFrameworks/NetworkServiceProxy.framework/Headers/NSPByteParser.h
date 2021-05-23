/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NSPByteParser : NSObject

{
    NSData *_data;
    const char *_bytes;
    const char *_cursor;
    unsigned long long _offset;
}

@property (readonly) NSData *data;
@property (readonly) const char *bytes;
@property const char *cursor;
@property unsigned long long offset;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)parseDomainName;
- (unsigned short)parse16Bits:(_Bool *)arg1;
- (unsigned int)parse32Bits:(_Bool *)arg1;
- (id)parseAddressWithFamily:(unsigned char)arg1;
- (const char *)parseBytes:(unsigned long long)arg1;
- (unsigned char)parse8Bits:(_Bool *)arg1;
- (_Bool)advanceBy:(unsigned long long)arg1 andCopyTo:(void *)arg2;

@end
