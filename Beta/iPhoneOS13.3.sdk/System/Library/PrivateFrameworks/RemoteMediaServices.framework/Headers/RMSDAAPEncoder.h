/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

__attribute__((visibility("hidden")))
@interface RMSDAAPEncoder : NSObject

{
    NSMutableData *_data;
}

@property (nonatomic, readonly) NSData *data;

- (id)init;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forCode:(unsigned int)arg3;
- (void)encodeInt32:(int)arg1 forCode:(unsigned int)arg2;
- (void)encodeInt64:(long long)arg1 forCode:(unsigned int)arg2;
- (void)encodeString:(id)arg1 forCode:(unsigned int)arg2;
- (void)encodeData:(id)arg1 forCode:(unsigned int)arg2;

@end
