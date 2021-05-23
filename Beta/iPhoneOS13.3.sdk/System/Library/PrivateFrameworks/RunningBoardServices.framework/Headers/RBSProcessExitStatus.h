/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

@interface RBSProcessExitStatus : NSObject

{
    unsigned int _domain;
    unsigned long long _code;
}

@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, readonly) unsigned long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)_nameForDomain:(unsigned int)arg1;
+ (id)_nameForDomain:(unsigned int)arg1 code:(unsigned long long)arg2;
+ (id)statusWithDomain:(unsigned int)arg1 code:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)error;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (_Bool)_isVoluntary;
- (_Bool)isSignal;
- (_Bool)isJetsam;
- (_Bool)isCrash;
- (_Bool)isFairPlayFailure;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (id)_dictionaryRepresentation;

@end
