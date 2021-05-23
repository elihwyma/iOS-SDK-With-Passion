/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HMUserInviteInformation : NSObject

{
    _Bool _administrator;
    _Bool _remoteAccessAllowed;
    NSString *_userID;
    unsigned long long _camerasAccessLevel;
}

@property (copy, nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly, getter=isAdministrator) _Bool administrator;
@property (nonatomic, readonly, getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed;
@property (nonatomic, readonly) unsigned long long camerasAccessLevel;

- (id)init;
- (id)initWithUser:(id)arg1 administrator:(_Bool)arg2 remoteAccess:(_Bool)arg3 camerasAccessLevel:(unsigned long long)arg4;
- (id)initWithUser:(id)arg1 administrator:(_Bool)arg2 remoteAccess:(_Bool)arg3;

@end
