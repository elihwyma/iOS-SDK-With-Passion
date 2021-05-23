/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDWrappingContext : NSObject

{
    CKRecordID *_recordID;
    NSString *_fieldName;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSData *referenceSignature;

- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4;
- (id)assetContextString;
- (id)encryptedDataContextString;

@end
