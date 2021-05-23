/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class CKReference, NSString;

@interface CKEncryptedReference : CKEncryptedData

@property (nonatomic, readonly) CKReference *reference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (id)initWithReference:(id)arg1;
- (id)_pReferenceFromReference:(id)arg1;
- (id)_referenceFromPReference:(id)arg1;
- (id)_recordIDFromPRecordIdentifier:(id)arg1;

@end
