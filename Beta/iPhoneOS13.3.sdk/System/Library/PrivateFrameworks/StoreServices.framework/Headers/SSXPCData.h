/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSData.h>

@class NSObject;

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SSXPCData : NSData

{
    NSObject<OS_xpc_object> *_xpcData;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcData;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCData:(id)arg1;

@end
