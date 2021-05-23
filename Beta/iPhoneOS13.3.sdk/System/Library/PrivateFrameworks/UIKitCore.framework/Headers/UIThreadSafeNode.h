/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject

{
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNode:(id)arg1;
- (id)_realNode;

@end
