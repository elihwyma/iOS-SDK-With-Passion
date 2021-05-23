/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;

@end
