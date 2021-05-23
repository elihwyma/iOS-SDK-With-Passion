/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDContainerInfo, NSObject;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoOperation : CKDOperation

{
    _Bool _requireUserIDs;
    CKDContainerInfo *_containerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

@property (copy, nonatomic) CKDContainerInfo *containerInfo;
@property (nonatomic) _Bool requireUserIDs;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *infoFetchedGroup;

- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (_Bool)shouldCheckAppVersion;

@end
