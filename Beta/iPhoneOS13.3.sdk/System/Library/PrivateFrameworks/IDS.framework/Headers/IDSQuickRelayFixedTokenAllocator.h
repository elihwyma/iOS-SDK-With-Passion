/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject

{
    NSData *_relayIP;
    NSNumber *_relayPort;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    NSData *_relaySessionID;
    NSNumber *_relayCombinedSoftwareID;
    NSData *_appleID;
    NSData *_relayIPv6;
}

@property (copy) NSData *relayIP;
@property (copy) NSData *relayIPv6;
@property (copy) NSNumber *relayPort;
@property (copy) NSData *relaySessionToken;
@property (copy) NSData *relaySessionKey;
@property (copy) NSData *relaySessionID;
@property (copy) NSNumber *relayCombinedSoftwareID;
@property (copy) NSData *appleID;

- (id)initWithDictionary:(id)arg1;
- (_Bool)_isSessionInfoValid:(id)arg1;
- (void)_setAllValuesFromDictionary:(id)arg1;
- (id)_parseQuickRelayDefaults;
- (id)initWithDefaults;

@end
