/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceAuthorizedPeerInternal, NSData, NSString;

@interface AVOutputDeviceAuthorizedPeer : NSObject

{
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) _Bool hasAdministratorPrivileges;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(_Bool)arg3;

@end
