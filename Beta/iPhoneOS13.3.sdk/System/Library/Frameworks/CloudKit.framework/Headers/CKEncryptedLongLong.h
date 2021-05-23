/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class NSString;

@interface CKEncryptedLongLong : CKEncryptedData

@property (nonatomic, readonly) long long longLongValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLongLong:(long long)arg1;
- (id)value;

@end
