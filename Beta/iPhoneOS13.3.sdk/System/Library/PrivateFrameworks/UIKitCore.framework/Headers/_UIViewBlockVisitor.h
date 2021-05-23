/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewVisitor.h>

__attribute__((visibility("hidden")))
@interface _UIViewBlockVisitor : _UIViewVisitor

{
    CDUnknownBlockType _visitorBlock;
}

@property (copy, nonatomic) CDUnknownBlockType visitorBlock;

- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(CDUnknownBlockType)arg2;
- (_Bool)_visitView:(id)arg1;

@end
