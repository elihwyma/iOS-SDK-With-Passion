/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSData, NSUUID, _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject

{
    _IDSDataChannelLinkContext *_internal;
}

@property (readonly) BOOL linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned char networkType;
@property (readonly) long long connectionType;
@property (readonly) unsigned int RATType;
@property (readonly) unsigned short maxMTU;
@property (readonly) long long relayServerProvider;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned int remoteRATType;
@property (readonly) unsigned int maxBitrate;
@property (readonly) _Bool serverIsDegraded;
@property (readonly) unsigned short localLinkFlags;
@property (readonly) unsigned short remoteLinkFlags;

- (id)description;
- (id)initWithDummyInformation;
- (id)initWithLinkID:(BOOL)arg1 linkUUID:(id)arg2 QRSessionID:(id)arg3 networkType:(unsigned char)arg4 connectionType:(long long)arg5 RATType:(unsigned int)arg6 MTU:(unsigned short)arg7 remoteNetworkType:(unsigned char)arg8 remoteConnectionType:(long long)arg9 remoteRATType:(unsigned int)arg10 maxBitrate:(unsigned int)arg11 relayServerProvider:(long long)arg12 relaySessionToken:(id)arg13 relaySessionKey:(id)arg14 serverIsDegraded:(_Bool)arg15;
- (id)initWithAttributes:(CDStruct_0310362a *)arg1 maxBitrate:(unsigned int)arg2 relayServerProvider:(long long)arg3 relaySessionToken:(id)arg4 relaySessionKey:(id)arg5;
- (void)setRATType:(unsigned int)arg1;
- (void)setMTU:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;

@end
