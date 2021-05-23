/*
 Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface NFMWhereIsMyCompanionConnection : NSObject

{
    NSXPCConnection *_serverConnection;
    CDUnknownBlockType _playSoundCompletion;
    CDUnknownBlockType _playSoundAndLEDCompletion;
}

@property (retain) NSXPCConnection *serverConnection;
@property (copy, nonatomic) CDUnknownBlockType playSoundCompletion;
@property (copy, nonatomic) CDUnknownBlockType playSoundAndLEDCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDeviceConnection;

- (id)init;
- (void)applicationIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)playedSound:(_Bool)arg1;
- (void)playedSoundAndLED:(_Bool)arg1;
- (void)playSoundOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (void)playSoundAndLightsOnCompanionWithCompletion:(CDUnknownBlockType)arg1;

@end
