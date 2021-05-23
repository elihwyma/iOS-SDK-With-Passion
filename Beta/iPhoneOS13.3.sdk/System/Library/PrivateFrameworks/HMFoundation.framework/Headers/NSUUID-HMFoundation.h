/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSUUID.h>

@class NSArray, NSString;

@interface NSUUID (HMFoundation)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)hmf_zeroUUID;
+ (id)zeroUUID;
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;

- (_Bool)hmf_isEqualToUUID:(id)arg1;
- (_Bool)hmf_isEqualToUUIDString:(id)arg1;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;

@end
