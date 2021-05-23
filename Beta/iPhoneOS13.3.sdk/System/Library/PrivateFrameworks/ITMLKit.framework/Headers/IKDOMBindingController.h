/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, NSDictionary, NSMutableArray, NSString, _IKDOMMutationRuleSet;

@protocol IKDOMBindingStrategy;

__attribute__((visibility("hidden")))
@interface IKDOMBindingController : NSObject

{
    NSDictionary *_bindingKeysByPathString;
    struct {
        _Bool hasKeysAffectingChildren;
        _Bool hasKeysAffectingSubtree;
        _Bool hasPrototypeDependentKeys;
        _Bool hasValueDidChangeForKey;
        _Bool hasDidResolveKeys;
    } _strategyFlags;
    NSMutableArray *_scheduledUpdaters;
    IKAppContext *_appContext;
    IKDOMElement *_domElement;
    IKDOMBindingController *_parent;
    IKDataBinding *_binding;
    IKJSDataItem *_dataItem;
    id <IKDOMBindingStrategy> _strategy;
    _IKDOMMutationRuleSet *_mutationRuleSet;
    NSDictionary *_prototypeGroupsByType;
    unsigned long long _resolutionTarget;
}

@property (nonatomic, readonly) _IKDOMMutationRuleSet *mutationRuleSet;
@property (nonatomic, readonly) NSDictionary *prototypeGroupsByType;
@property (nonatomic, readonly) unsigned long long resolutionTarget;
@property (weak, nonatomic, readonly) IKAppContext *appContext;
@property (weak, nonatomic, readonly) IKDOMElement *domElement;
@property (weak, nonatomic, readonly) IKDOMBindingController *parent;
@property (nonatomic, readonly) IKDataBinding *binding;
@property (weak, nonatomic, readonly) IKJSDataItem *dataItem;
@property (nonatomic, readonly) id <IKDOMBindingStrategy> strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parsedBindingForDOMElement:(id)arg1;
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;
+ (id)_parsedMutationRulesForDOMElement:(id)arg1;
+ (id)_prototypeGroupsByTypeForDOMElement:(id)arg1;
+ (void)prepareForDOMElement:(id)arg1;
+ (id)domBindingControllerForDOMElement:(id)arg1;

- (void)dealloc;
- (id)initWithDOMElement:(id)arg1;
- (void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3;
- (void)scheduleUpdateUsingPreUpdate:(CDUnknownBlockType)arg1 update:(CDUnknownBlockType)arg2;
- (_Bool)_canBeReused;
- (void)_resolveBinding;
- (void)_evaluateMutationRules;
- (id)findPrototypeForDataItem:(id)arg1;

@end
