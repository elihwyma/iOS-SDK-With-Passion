/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (KeyPathLookup)

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

- (id)hmf_firstObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)hmf_firstObjectWithName:(id)arg1;
- (id)hmf_firstObjectWithUUID:(id)arg1;
- (id)hmf_firstObjectWithZoneID:(id)arg1;
- (id)hmf_firstObjectWithUniqueIdentifier:(id)arg1;
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)arg1;
- (id)hmf_firstObjectWithInstanceID:(id)arg1;
- (id)hmf_firstObjectWithCharacteristicType:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (_Bool)hmf_objectsAreKindOfClass:(Class)arg1;
- (id)hmf_objectPassingTest:(CDUnknownBlockType)arg1;
- (id)hmf_objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hmf_objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hmf_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)describeElements:(CDUnknownBlockType)arg1;

@end
