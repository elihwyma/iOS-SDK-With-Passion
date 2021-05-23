/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSArray, NSSet, NSString;

@interface RBSTerminateContext : NSObject

{
    unsigned char _maximumTerminationResistance;
    _Bool _graceful;
    unsigned char _maximumRole;
    _Bool _preventIfBeingDebugged;
    unsigned int _exceptionDomain;
    NSString *_explanation;
    unsigned long long _reportType;
    unsigned long long _exceptionCode;
    NSArray *_attributes;
    NSSet *_preventingEndowmentNamespaces;
}

@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) _Bool graceful;
@property (nonatomic) unsigned char maximumRole;
@property (retain, nonatomic) NSSet *preventingEndowmentNamespaces;
@property (nonatomic) _Bool preventIfBeingDebugged;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) unsigned int exceptionDomain;
@property (nonatomic) unsigned long long exceptionCode;
@property (nonatomic) unsigned char maximumTerminationResistance;
@property (nonatomic, readonly) _Bool shouldTerminatePlugIns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;
+ (_Bool)supportsBSXPCSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
