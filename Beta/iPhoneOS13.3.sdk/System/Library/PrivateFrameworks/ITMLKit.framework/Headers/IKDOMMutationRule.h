/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDOMConditional.h>

__attribute__((visibility("hidden")))
@interface IKDOMMutationRule : IKDOMConditional

{
    _Bool _mutable;
}

@property (nonatomic, readonly, getter=isMutable) _Bool mutable;

+ (id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)mutationRuleWithDOMElement:(id)arg1 mutable:(_Bool)arg2;

- (long long)compare:(id)arg1;
- (id)initWithDOMElement:(id)arg1 mutable:(_Bool)arg2;
- (void)applyOnDOMElement:(id)arg1;

@end
