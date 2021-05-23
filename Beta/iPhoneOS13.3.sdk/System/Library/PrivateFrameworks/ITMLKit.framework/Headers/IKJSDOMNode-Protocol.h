/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMDocument, IKDOMNode, IKDOMNodeList, JSValue, NSString;

@protocol IKJSDOMNode <Swift>

@property (retain, nonatomic, readonly) NSString *nodeName;
@property (retain, nonatomic) NSString *nodeValue;
@property (nonatomic, readonly) long long nodeType;
@property (weak, nonatomic, readonly) IKDOMNode *parentNode;
@property (retain, nonatomic, readonly) IKDOMNodeList *childNodes;
@property (retain, nonatomic, readonly) IKDOMNode *firstChild;
@property (retain, nonatomic, readonly) IKDOMNode *lastChild;
@property (weak, nonatomic, readonly) IKDOMNode *previousSibling;
@property (weak, nonatomic, readonly) IKDOMNode *nextSibling;
@property (weak, nonatomic, readonly) IKDOMDocument *ownerDocument;
@property (retain, nonatomic) NSString *textContent;
@property (weak, nonatomic) JSValue *dataItem;

- (unsigned short)contains: /* Error: Ran out of types for this method. */;
- (unsigned short)hasChildNodes;
- (unsigned short)removeChild: /* Error: Ran out of types for this method. */;
- (unsigned short)appendChild: /* Error: Ran out of types for this method. */;
- (unsigned short)isSameNode: /* Error: Ran out of types for this method. */;
- (unsigned short)cloneNode: /* Error: Ran out of types for this method. */;
- (unsigned short)isEqualNode: /* Error: Ran out of types for this method. */;
- (unsigned short)insertBefore:: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceChild:: /* Error: Ran out of types for this method. */;
- (unsigned short)getFeature:: /* Error: Ran out of types for this method. */;

@end
