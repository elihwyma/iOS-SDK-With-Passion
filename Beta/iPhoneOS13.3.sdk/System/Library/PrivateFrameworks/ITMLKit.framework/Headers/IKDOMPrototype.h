/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDOMConditional.h>

@class NSArray, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype : IKDOMConditional

{
    struct {
        _Bool parsedGrouping;
    } _flags;
    struct NSArray *_grouping;
    NSString *_type;
    NSString *_selector;
    _IKDOMPrototypeDerivationRules *_rules;
}

@property (copy, nonatomic, readonly) _IKDOMPrototypeDerivationRules *rules;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *selector;
@property (copy, nonatomic, readonly) NSArray *grouping;

+ (struct NSArray *)_groupingForDOMElement:(id)arg1;
+ (id)prototypeWithDOMElement:(id)arg1;

- (id)variantForDataItem:(id)arg1;
- (id)initWithDOMElement:(id)arg1 selector:(id)arg2;
- (id)_derivativeWithDataItem:(id)arg1;
- (id)instantiateDOMElement;

@end
