/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class NSArray, NSString;

@interface CKEncryptedLongLongArray : CKEncryptedData

@property (nonatomic, readonly) NSArray *longLongArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (id)initWithLongLongArray:(id)arg1;

@end
