/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject

{
    IKDOMNode *_parentNode;
}

@property (weak, nonatomic) IKDOMNode *parentNode;
@property (readonly) unsigned long long length;

- (id)item:(unsigned long long)arg1;
- (id)initWithAppContext:(id)arg1 node:(id)arg2;

@end
