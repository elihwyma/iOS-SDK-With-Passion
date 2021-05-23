/*
 Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SecureBackup;

@interface SRPInit : NSObject

{
    NSString *_recordLabel;
    NSDictionary *_escrowRecord;
    NSString *_recordID;
    SecureBackup *_sb;
}

@property (copy, nonatomic, readonly) NSString *dsid;
@property (copy, nonatomic) NSString *recordLabel;
@property (copy, nonatomic, readonly) NSString *recoveryPassphrase;
@property (retain, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *recordID;
@property (retain, nonatomic, readonly) SecureBackup *sb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)validateInput;
- (id)initWithSecureBackup:(id)arg1;

@end
