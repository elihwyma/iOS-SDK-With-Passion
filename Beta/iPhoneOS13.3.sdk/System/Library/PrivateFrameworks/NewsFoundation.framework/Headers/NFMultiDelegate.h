/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject

{
    NSHashTable *_children;
    Protocol *_delegateProtocol;
}

@property (nonatomic, readonly) NSHashTable *children;
@property (nonatomic, readonly) Protocol *delegateProtocol;
@property (nonatomic, readonly) id delegate;

- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;

@end
