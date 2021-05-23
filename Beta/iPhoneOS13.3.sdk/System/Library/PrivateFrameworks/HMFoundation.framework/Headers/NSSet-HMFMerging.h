/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSSet.h>

@class NSArray, NSString;

@interface NSSet (HMFMerging)

@property (readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)shortDescription;

- (id)hmf_addedObjectsFromSet:(id)arg1;
- (id)hmf_removedObjectsFromSet:(id)arg1;
- (id)hmf_commonObjectsFromSet:(id)arg1;

@end
