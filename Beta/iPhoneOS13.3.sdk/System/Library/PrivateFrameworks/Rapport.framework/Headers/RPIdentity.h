/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface RPIdentity : NSObject

{
    _Bool _userAdded;
    _Bool _disabled;
    _Bool _present;
    int _type;
    unsigned int _revisionID;
    NSArray *_accessGroups;
    NSString *_accountID;
    NSString *_contactID;
    NSDate *_dateAdded;
    NSDate *_dateRemoved;
    NSData *_deviceIRKData;
    NSData *_edPKData;
    NSData *_edSKData;
    unsigned long long _featureFlags;
    NSString *_identifier;
    NSString *_idsDeviceID;
    NSString *_mediaRemoteID;
    NSString *_mediaRouteID;
    NSString *_model;
    NSString *_name;
    NSString *_sendersKnownAlias;
    NSDate *_dateAcknowledged;
    NSDate *_dateRequested;
}

@property (copy, nonatomic) NSDate *dateAcknowledged;
@property (copy, nonatomic) NSDate *dateAdded;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSDate *dateRequested;
@property (nonatomic) _Bool disabled;
@property (copy, nonatomic) NSData *edSKData;
@property (nonatomic) unsigned long long featureFlags;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *mediaRemoteID;
@property (copy, nonatomic) NSString *mediaRouteID;
@property (nonatomic) _Bool present;
@property (nonatomic) unsigned int revisionID;
@property (copy, nonatomic) NSArray *accessGroups;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSData *deviceIRKData;
@property (copy, nonatomic) NSData *edPKData;
@property (copy, nonatomic) NSString *idsDeviceID;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sendersKnownAlias;
@property (nonatomic) int type;
@property (nonatomic) _Bool userAdded;

+ (_Bool)supportsSecureCoding;
+ (id)nullIdentity;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)descriptionWithLevel:(int)arg1;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)verifyAuthTagPtr:(const void *)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id *)arg6;
- (_Bool)signDataPtr:(const void *)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char [64])arg3 error:(id *)arg4;
- (_Bool)verifySignaturePtr:(const void *)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 error:(id *)arg5;
- (unsigned int)compareWithRPIdentity:(id)arg1;
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id *)arg2;
- (unsigned int)updateWithRPMessage:(id)arg1 error:(id *)arg2;
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (_Bool)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id *)arg4;

@end
