/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <Swift>

{
    unsigned long long _length;
    _Bool _isShmem;
    unsigned long long _offset;
    NSObject<OS_xpc_object> *_data;
    NSData *_imageSetHash;
}

@property (nonatomic, readonly) NSData *imageSetHash;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)purge;
- (id)containedImageSet;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(_Bool)arg3 offset:(unsigned long long)arg4 hash:(id)arg5;

@end
