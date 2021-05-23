/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <Swift>

{
    NSSet *_senderDescriptors;
    NSSet *_descriptors;
}

@property (copy, nonatomic, readonly) NSSet *senderDescriptors;
@property (copy, nonatomic, readonly) NSSet *descriptors;
@property (copy, nonatomic, readonly) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)specifiesDescriptor:(id)arg1;
- (_Bool)containsDescriptor:(id)arg1;
- (id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2;

@end
