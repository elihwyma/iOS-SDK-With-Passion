/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSString.h>

@interface PLUUIDString : NSString

{
    unsigned char _uuid[16];
    char _uuidString[37];
}

+ (id)UUIDString;
+ (_Bool)parseUUIDString:(id)arg1 uuidBuffer:(char *)arg2;

- (id)init;
- (unsigned long long)length;
- (const char *)UTF8String;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (_Bool)isEqualToString:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)initWithUUID:(unsigned char [16])arg1;
- (id)initWithUUIDData:(id)arg1;
- (id)UUIDData;
- (id)initWithCFUUID:(struct __CFUUID *)arg1;
- (id)initWithCFUUIDBytes:(CDStruct_bd2f613f)arg1;
- (CDStruct_bd2f613f)UUIDBytes;

@end
