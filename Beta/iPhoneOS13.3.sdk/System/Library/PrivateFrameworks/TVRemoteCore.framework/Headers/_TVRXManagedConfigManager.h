/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRXManagedConfigManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)refreshState;
- (_Bool)managedConfigProfileInstalled;

@end
