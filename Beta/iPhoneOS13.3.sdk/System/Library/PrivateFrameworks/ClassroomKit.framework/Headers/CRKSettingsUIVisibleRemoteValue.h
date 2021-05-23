/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATRemoteTaskOperation, NSString;

@protocol CRKRequestPerformingProtocol;

@interface CRKSettingsUIVisibleRemoteValue : NSObject

{
    id <CRKRequestPerformingProtocol> mDaemonProxy;
    CATRemoteTaskOperation *mSubscriptionOperation;
    long long _settingsUIVisible;
}

@property (nonatomic) long long settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)endUpdating;
- (void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1;
- (_Bool)isCurrentSubscriptionOperation:(id)arg1;
- (void)settingsUIVisibleDidChange:(_Bool)arg1;
- (id)initWithDaemonProxy:(id)arg1;
- (void)beginUpdating;

@end
