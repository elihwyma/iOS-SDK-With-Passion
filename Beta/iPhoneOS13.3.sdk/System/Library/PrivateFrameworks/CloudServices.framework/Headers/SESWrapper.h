/*
 Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SESWrapper : NSObject

{
    _Bool _recoveryPassphraseMutable;
    NSString *_decodedLabel;
    NSDate *_escrowDate;
    NSData *_recoveryBlob;
    struct ccses_crypto_t *_ccses;
    struct ccsrp_ctx *_srp;
    NSString *_dsid;
    NSString *_recoveryPassphrase;
    NSString *_label;
    NSString *_recordID;
    NSDictionary *_escrowRecord;
    NSData *_escrowBlob;
}

@property (nonatomic, readonly) struct ccses_crypto_t *ccses;
@property (nonatomic, readonly) struct ccsrp_ctx *srp;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recoveryPassphrase;
@property (nonatomic) _Bool recoveryPassphraseMutable;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *recordID;
@property (copy, nonatomic, readonly) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *decodedLabel;
@property (copy, nonatomic) NSDate *escrowDate;
@property (retain, nonatomic) NSData *escrowBlob;
@property (retain) NSData *recoveryBlob;

- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)srpInitBlob;
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id *)arg2;
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5;
- (id)srpResponseForEscrowBlob:(id)arg1 withKey:(struct __SecKey *)arg2;
- (id)recoveryResponseForBlob:(id)arg1;
- (id)decodedEscrowRecordFromData:(id)arg1;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey *)arg1 error:(id *)arg2;

@end
