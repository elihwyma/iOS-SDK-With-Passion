/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSProxy.h>

@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy

{
    id _target;
    KSXMLWriter *_XMLWriter;
    unsigned long long _elementsCount;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)ks_prepareWithTarget:(id)arg1 XMLWriter:(id)arg2;

@end
