/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMHTMLCollection, IKDOMNamedNodeMap, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol IKStyleableElement;

@interface IKDOMElement <Swift>

{
    NSMutableDictionary *_metadataDict;
    NSArray *_cachedChildElements;
    NSDictionary *_cachedAttributes;
    IKViewElementStyleComposer *styleComposer;
    IKDOMElement *__aliasOf;
}

@property (retain, nonatomic) NSString *innerHTML;
@property (retain, nonatomic) NSString *outerHTML;
@property (nonatomic, readonly) _Bool _isPrototypeElement;
@property (nonatomic, readonly) _Bool _isPartOfPrototypeElement;
@property (weak, nonatomic, setter=_setAliasOf:) IKDOMElement *_aliasOf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <IKStyleableElement> parentStyleableElement;
@property (copy, nonatomic, readonly) NSString *elementName;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;
@property (retain, nonatomic, readonly) NSString *tagName;
@property (copy, nonatomic, readonly) IKDOMNamedNodeMap *attributes;
@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;
@property (nonatomic, readonly) unsigned long long childElementCount;

+ (id)_filteredAttributes;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)_attributes;
- (long long)nodeType;
- (id)getAttribute:(id)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (_Bool)hasAttributes;
- (_Bool)hasAttribute:(id)arg1;
- (id)nodeName;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1:(id)arg2;
- (void)domib_setAppDataSet:(id)arg1;
- (id)domib_appDataSet;
- (void)domib_setItemsChangeSet:(id)arg1;
- (id)domib_itemsChangeSet;
- (void)domib_setVisibleIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)domib_visibleIndexRange;
- (id)childElements;
- (id)ik_templateName;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(_Bool)arg2;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;
- (void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)asPrivateIKJSDOMElement;
- (id)childElementByTagName:(id)arg1;
- (id)childElementsByTagName:(id)arg1;
- (void)domp_setPrototype:(id)arg1;
- (id)domp_prototype;
- (void)domp_setDerivativeDOMElementsBySelector:(id)arg1;
- (id)domp_derivativeDOMElementsBySelector;
- (void)insertAdjacentHTML:(id)arg1:(id)arg2;
- (id)ik_templateElementCSSSelectorList;
- (id)domb_boundCSSRule;
- (void)domb_setDOMBindingController:(id)arg1;
- (id)domb_domBindingController;
- (void)domb_setDataBinding:(id)arg1;
- (id)domb_dataBinding;
- (void)domb_setMutationRuleSet:(id)arg1;
- (id)domb_mutationRuleSet;
- (void)domb_setBoundCSSRule:(id)arg1;
- (void)ikve_setPrototypesID:(id)arg1;
- (id)ikve_prototypesID;
- (void)ikve_setRulesID:(id)arg1;
- (id)ikve_rulesID;
- (void)dombs_setItems:(id)arg1;
- (id)dombs_items;

@end
