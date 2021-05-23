/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NEByteParser : NSObject

{
    unsigned long long _offset;
    NSData *_data;
    const char *_bytes;
    const char *_cursor;
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
- (_Bool)copyBytes:(unsigned long long)arg1 to:(void *)arg2;
- (unsigned char)parse8Bits:(_Bool *)arg1;
- (_Bool)advanceBy:(unsigned long long)arg1 andCopyTo:(void *)arg2;

@end
