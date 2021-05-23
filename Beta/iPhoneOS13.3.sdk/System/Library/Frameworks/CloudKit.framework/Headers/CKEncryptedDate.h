/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class NSDate, NSString;

@interface CKEncryptedDate : CKEncryptedData

@property (nonatomic, readonly) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDate:(id)arg1;
- (id)value;

@end
