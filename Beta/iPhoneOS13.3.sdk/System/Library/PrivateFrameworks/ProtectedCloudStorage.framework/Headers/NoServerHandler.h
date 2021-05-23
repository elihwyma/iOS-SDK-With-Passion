/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NoServerHandler : NSObject

{
    CDUnknownBlockType _handler;
}

@property (readonly) CDUnknownBlockType handler;

- (void)call;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end
