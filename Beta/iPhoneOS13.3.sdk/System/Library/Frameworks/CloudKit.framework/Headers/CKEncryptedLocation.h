/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKEncryptedData.h>

@class CLLocation, NSString;

@interface CKEncryptedLocation : CKEncryptedData

@property (nonatomic, readonly) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (id)initWithLocation:(id)arg1;

@end
