/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OTJoiningConfiguration : NSObject

{
    _Bool _isInitiator;
    NSString *_protocolType;
    NSString *_uniqueDeviceID;
    NSString *_uniqueClientID;
    NSString *_containerName;
    NSString *_contextID;
    NSString *_pairingUUID;
    unsigned long long _epoch;
    long long _timeout;
}

@property (retain, nonatomic) NSString *protocolType;
@property (retain, nonatomic) NSString *uniqueDeviceID;
@property (retain, nonatomic) NSString *uniqueClientID;
@property (retain, nonatomic) NSString *containerName;
@property (retain, nonatomic) NSString *contextID;
@property (retain, nonatomic) NSString *pairingUUID;
@property (nonatomic) unsigned long long epoch;
@property (nonatomic) _Bool isInitiator;
@property long long timeout;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 containerName:(id)arg4 contextID:(id)arg5 epoch:(unsigned long long)arg6 isInitiator:(_Bool)arg7;
- (id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 containerName:(id)arg5 contextID:(id)arg6 epoch:(unsigned long long)arg7 isInitiator:(_Bool)arg8;

@end
