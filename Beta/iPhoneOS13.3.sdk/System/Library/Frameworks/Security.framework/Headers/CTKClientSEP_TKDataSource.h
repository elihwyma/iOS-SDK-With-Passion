/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKDataSource : NSObject

{
    NSData *_data;
    const char *_ptr;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (id)initWithData:(id)arg1;
- (_Bool)bytesSafeToRead:(long long)arg1;
- (unsigned char)fetchByte;
- (id)fetchDataWithLength:(long long)arg1;

@end
