/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CSCoder : NSObject

{
    _Bool _finalized;
    NSData *_data;
    struct _MDPlistContainer *_container;
}

@property (nonatomic, readonly) struct _MDPlistContainer *container;
@property (nonatomic, readonly) _Bool finalized;
@property (nonatomic, readonly) NSData *data;

- (id)init;
- (void)dealloc;
- (void)encodeObject:(id)arg1;
- (void)encodeBool:(_Bool)arg1;
- (void)encodeString:(const char *)arg1;
- (void)beginType:(const char *)arg1;
- (void)encodeInt32:(int)arg1;
- (void)beginDictionary;
- (void)encodeString:(const char *)arg1 length:(long long)arg2;
- (void)encodeMDPlistObject:(CDStruct_b7fac349)arg1;
- (void)endDictionary;
- (void)endType;
- (void)encodeInt64:(long long)arg1;
- (void)encodeData:(const void *)arg1 length:(long long)arg2;
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;
- (void)encodeNSString:(id)arg1;
- (void)beginArray;
- (void)endArray;

@end
