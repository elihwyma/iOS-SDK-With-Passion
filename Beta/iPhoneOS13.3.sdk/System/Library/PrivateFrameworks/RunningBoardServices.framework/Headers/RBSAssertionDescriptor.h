/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSArray, NSString, RBSAssertionIdentifier, RBSTarget;

@interface RBSAssertionDescriptor : NSObject

{
    RBSAssertionIdentifier *_identifier;
    RBSTarget *_target;
    NSString *_explanation;
    NSArray *_attributes;
}

@property (copy, nonatomic, readonly) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic) RBSTarget *target;
@property (copy, nonatomic, readonly) NSString *explanation;
@property (copy, nonatomic, readonly) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)descriptorWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4;

@end
