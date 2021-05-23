/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSData, NSNumber, NSString;

@interface HAPAccessoryProtocolInfo : HMFObject

{
    unsigned char _featureFlags;
    unsigned char _statusFlags;
    unsigned short _categoryIdentifier;
    NSString *_deviceIdentifer;
    NSNumber *_currentStateNumber;
    NSNumber *_currentConfigNumber;
    NSString *_modelName;
    HMFVersion *_protocolVersion;
    NSData *_setupHash;
}

@property (nonatomic, readonly) NSString *deviceIdentifer;
@property (nonatomic, readonly) NSNumber *currentStateNumber;
@property (nonatomic, readonly) NSNumber *currentConfigNumber;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) HMFVersion *protocolVersion;
@property (nonatomic, readonly) unsigned char featureFlags;
@property (nonatomic, readonly) unsigned char statusFlags;
@property (nonatomic, readonly) unsigned short categoryIdentifier;
@property (nonatomic, readonly) NSData *setupHash;

- (id)initWithIdentifier:(id)arg1 currentStateNumber:(id)arg2 currentConfigNumber:(id)arg3 modelName:(id)arg4 protocolVersion:(id)arg5 authMethods:(unsigned char)arg6 statusFlags:(unsigned char)arg7 categoryIdentifier:(unsigned short)arg8 setupHash:(id)arg9;

@end
