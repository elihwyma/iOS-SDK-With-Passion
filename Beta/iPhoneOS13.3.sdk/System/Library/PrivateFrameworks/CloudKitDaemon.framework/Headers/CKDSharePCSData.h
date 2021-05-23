/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDSharePCSData : CKDPCSData

{
    struct _OpaquePCSShareProtection *_publicPCS;
    CKRecordID *_shareID;
    unsigned long long _serviceType;
    NSString *_shareEtag;
    long long _publicPermission;
    long long _myParticipantRole;
    long long _myParticipantPermission;
    struct _OpaquePCSShareProtection *_myParticipantPCS;
    NSData *_myParticipantPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicPCSData;
}

@property (retain, nonatomic) CKRecordID *shareID;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) NSString *shareEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic) long long myParticipantRole;
@property (nonatomic) long long myParticipantPermission;
@property (nonatomic) struct _OpaquePCSShareProtection *myParticipantPCS;
@property (copy, nonatomic) NSData *myParticipantPCSData;
@property (nonatomic) struct _OpaquePCSShareProtection *invitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection *publicPCS;
@property (copy, nonatomic) NSString *publicPCSEtag;
@property (copy, nonatomic) NSData *publicPCSData;

+ (_Bool)supportsSecureCoding;
+ (id)dataWithShare:(id)arg1 serviceType:(unsigned long long)arg2;
+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;

@end
