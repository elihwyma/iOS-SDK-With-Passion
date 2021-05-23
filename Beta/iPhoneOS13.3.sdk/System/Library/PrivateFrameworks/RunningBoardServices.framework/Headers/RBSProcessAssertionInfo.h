/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

@interface RBSProcessAssertionInfo : NSObject

{
    unsigned char _type;
    unsigned long long _reason;
    NSString *_explanation;
    NSString *_domain;
    NSString *_name;
}

@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned char)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (_Bool)isLegacyAssertionReason:(unsigned long long)arg1;

@end
