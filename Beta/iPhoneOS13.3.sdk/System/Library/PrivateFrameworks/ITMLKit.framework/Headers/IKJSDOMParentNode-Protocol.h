/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMElement, IKDOMHTMLCollection;

@protocol IKJSDOMParentNode <Swift>

@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;
@property (nonatomic, readonly) unsigned long long childElementCount;

@end
