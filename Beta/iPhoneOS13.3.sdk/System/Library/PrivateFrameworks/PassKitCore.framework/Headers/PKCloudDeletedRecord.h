/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <Swift>

{
    CKRecordID *_recordID;
    NSString *_recordType;
}

@property (nonatomic, readonly) CKRecordID *recordID;
@property (copy, nonatomic, readonly) NSString *recordType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;

@end
