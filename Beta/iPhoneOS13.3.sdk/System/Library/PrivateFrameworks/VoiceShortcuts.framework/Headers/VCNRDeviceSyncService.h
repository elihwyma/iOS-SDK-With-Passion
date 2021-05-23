/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <Swift>

{
    NSString *_syncServiceIdentifier;
    NSURL *_directoryURL;
    long long _protocolVersion;
    VCCompanionSyncService *_service;
}

@property (weak, nonatomic, readonly) VCCompanionSyncService *service;
@property (nonatomic, readonly) long long protocolVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *syncServiceIdentifier;
@property (copy, nonatomic, readonly) NSURL *directoryURL;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)requestSync;
- (void)requestFullResync;
- (id)initWithCompanionSyncService:(id)arg1 device:(id)arg2;

@end
