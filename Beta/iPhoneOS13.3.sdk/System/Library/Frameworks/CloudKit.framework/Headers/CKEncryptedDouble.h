/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class NSString;

@interface CKEncryptedDouble : CKEncryptedData

@property (nonatomic, readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDouble:(double)arg1;
- (id)value;

@end
