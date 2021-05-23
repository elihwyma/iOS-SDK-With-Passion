/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class NSString;

@interface CKEncryptedString : CKEncryptedData

@property (nonatomic, readonly) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithString:(id)arg1;
- (id)value;

@end
