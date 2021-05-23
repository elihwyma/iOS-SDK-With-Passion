/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDAcceptShareMetadata : NSObject

{
    _Bool _acceptedInProcess;
    NSURL *_shareURL;
    CKRecordID *_shareRecordID;
    NSString *_etag;
    NSData *_publicPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicKey;
    unsigned long long _publicKeyVersion;
    NSData *_oonProtectionInfo;
    NSString *_oonParticipantID;
    NSData *_dugongInvitationProtectionInfo;
}

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSData *publicPCSData;
@property (retain, nonatomic) NSString *publicPCSEtag;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSData *oonProtectionInfo;
@property (retain, nonatomic) NSString *oonParticipantID;
@property (retain, nonatomic) NSData *dugongInvitationProtectionInfo;
@property (nonatomic) _Bool acceptedInProcess;

@end
