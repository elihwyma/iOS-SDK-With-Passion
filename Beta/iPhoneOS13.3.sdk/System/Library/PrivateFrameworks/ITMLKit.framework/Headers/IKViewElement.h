/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, IKChangeSet, IKDOMBindingController, IKDataBinding, IKViewElementStyle, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@protocol IKStyleableElement;

@interface IKViewElement : NSObject

{
    NSArray *_unfilteredChildren;
    NSArray *_visibleChildren;
    _Bool _isPartOfPrototypeElement;
    _Bool _isProxyElement;
    _Bool _disabled;
    _Bool _impressionable;
    _Bool _didUpdateAutoHighlightIdentifier;
    _Bool _areChildrenBound;
    _Bool _prototypesUpdated;
    IKAppDocument *_appDocument;
    IKViewElementStyleComposer *_styleComposer;
    IKViewElementStyle *_style;
    id <IKStyleableElement> _parentStyleableElement;
    NSString *_elementID;
    unsigned long long _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSDictionary *_attributes;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    NSDictionary *_impressionableAttributes;
    unsigned long long _updateType;
    IKChangeSet *_unfilteredChildrenChangeSet;
    NSArray *_features;
    NSDictionary *_dataDictionary;
    NSString *_classSelector;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
    NSString *_itmlID;
    IKDataBinding *_binding;
    IKDOMBindingController *_bindingController;
    NSArray *_aliases;
    unsigned long long _implicitUpdateType;
}

@property (weak, nonatomic) IKViewElement *parent;
@property (copy, nonatomic, readonly) NSString *classSelector;
@property (retain, nonatomic) NSDictionary *dataDictionary;
@property (copy, nonatomic) NSString *autoHighlightIdentifier;
@property (nonatomic) _Bool didUpdateAutoHighlightIdentifier;
@property (retain, nonatomic) NSMutableDictionary *metadataDict;
@property (retain, nonatomic) NSMutableSet *activeSingularEvents;
@property (weak, nonatomic) IKAppDocument *appDocument;
@property (retain, nonatomic, readonly) NSString *itmlID;
@property (nonatomic, readonly) IKDataBinding *binding;
@property (nonatomic, readonly) IKDOMBindingController *bindingController;
@property (nonatomic, readonly) _Bool areChildrenBound;
@property (nonatomic, readonly) _Bool prototypesUpdated;
@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) _Bool isPartOfPrototypeElement;
@property (nonatomic, readonly) _Bool isProxyElement;
@property (nonatomic, readonly) unsigned long long implicitUpdateType;
@property (copy, nonatomic, readonly) NSString *elementID;
@property (nonatomic, readonly) unsigned long long elementType;
@property (copy, nonatomic, readonly) NSString *elementName;
@property (retain, nonatomic, readonly) NSArray *children;
@property (retain, nonatomic, readonly) NSArray *unfilteredChildren;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (retain, nonatomic, readonly) NSDictionary *attributes;
@property (retain, nonatomic, readonly) IKViewElementStyle *style;
@property (copy, nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, getter=isImpressionable) _Bool impressionable;
@property (nonatomic, readonly) NSDictionary *impressionableAttributes;
@property (nonatomic, readonly) IKChangeSet *unfilteredChildrenChangeSet;
@property (copy, nonatomic, readonly) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <IKStyleableElement> parentStyleableElement;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;

+ (id)supportedFeatures;
+ (_Bool)shouldParseChildDOMElements;
+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)supportedFeaturesForElementName:(id)arg1;
+ (_Bool)shouldParseChildDOMElement:(id)arg1;
+ (unsigned long long)evaluateElementUpdateType:(id)arg1;
+ (void)willParseDOMElement:(id)arg1;
+ (id)effectiveChildDOMElementsForDOMElement:(id)arg1;
+ (id)DOMEventTypeNameMap;
+ (id)_eventXMLNameMap;

- (id)init;
- (void)dealloc;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (id)childElementWithType:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(_Bool)arg3 isCancelable:(_Bool)arg4 extraInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)configureUpdatesWithElement:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)resetProperty:(unsigned long long)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (void)resetImplicitUpdates;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithOriginalElement:(id)arg1;
- (void)performImplicitUpdates:(CDUnknownBlockType)arg1;
- (id)proxyElementForLoadedChildElement:(id)arg1;
- (_Bool)canProxyUnloadedChildElement:(id)arg1;
- (void)resetUpdates;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (void)disperseUpdateType:(unsigned long long)arg1;
- (void)adoptElement:(id)arg1;
- (_Bool)_elevateToImplicitUpdateType:(unsigned long long)arg1;
- (unsigned long long)_updateSubtreeWithElement:(id)arg1;
- (void)updateWithActualElement:(id)arg1;

@end
