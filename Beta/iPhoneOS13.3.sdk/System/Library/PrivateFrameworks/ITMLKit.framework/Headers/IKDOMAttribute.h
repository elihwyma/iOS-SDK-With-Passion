/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKDOMNode, NSString;

@interface IKDOMAttribute

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) IKDOMNode *ownerElement;

- (id)firstChild;
- (id)nextSibling;
- (long long)nodeType;
- (_Bool)hasChildNodes;
- (id)removeChild:(id)arg1;
- (id)appendChild:(id)arg1;
- (id)textContent;
- (id)lastChild;
- (id)childNodes;
- (id)previousSibling;
- (_Bool)dispatchEvent:(id)arg1;
- (id)nodeValue;
- (id)nodeName;
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)cloneNode:(_Bool)arg1;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode *)arg2;
- (id)getFeature:(id)arg1:(id)arg2;

@end
