/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CAMNebulaKeepAliveController : NSObject

{
    _Bool __didCreateKeepAliveDirectory;
    int __nebuladKeepAliveFileDescriptor;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSMutableSet *__nebuladKeepAliveIdentifiers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_syncQueue;
@property (nonatomic, setter=_setNebuladKeepAliveFileDescriptor:) int _nebuladKeepAliveFileDescriptor;
@property (nonatomic, readonly) NSMutableSet *_nebuladKeepAliveIdentifiers;
@property (nonatomic, setter=_setDidCreateKeepAliveDirectory:) _Bool _didCreateKeepAliveDirectory;

- (id)init;
- (id)_keepAliveFilePath;
- (void)startKeepAliveForIdentifier:(id)arg1;
- (void)stopKeepAliveForIdentifier:(id)arg1;
- (void)removeKeepAliveFileIfNotKeptForAnyIdentifiers;

@end
