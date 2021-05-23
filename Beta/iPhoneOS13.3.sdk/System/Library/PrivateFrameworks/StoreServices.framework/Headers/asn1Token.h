/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface asn1Token : NSObject

{
    unsigned char mClass;
    unsigned long long mIdentifier;
    unsigned long long mLength;
    const char *mContent;
}

@property (readonly) unsigned char tokenClass;
@property (readonly) unsigned long long identifier;
@property (readonly) unsigned long long length;
@property (readonly) const char *content;

+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(_Bool)arg2;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;

- (id)description;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;

@end
