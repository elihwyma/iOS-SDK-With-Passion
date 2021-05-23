/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKDOMElement, IKDOMHTMLCollection;

@interface IKDOMDocumentFragment

@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;
@property (nonatomic, readonly) unsigned long long childElementCount;

- (long long)nodeType;
- (id)nodeName;

@end
