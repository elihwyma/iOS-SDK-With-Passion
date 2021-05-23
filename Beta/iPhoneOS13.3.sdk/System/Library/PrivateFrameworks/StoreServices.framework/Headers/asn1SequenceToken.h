/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/asn1Token.h>

__attribute__((visibility("hidden")))
@interface asn1SequenceToken : asn1Token

{
    const char *mReadPointer;
}

- (id)description;
- (void)reset;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;
- (id)nextToken;

@end
