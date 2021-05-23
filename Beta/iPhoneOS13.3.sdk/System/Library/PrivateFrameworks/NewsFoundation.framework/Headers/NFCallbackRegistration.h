/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

#import <NewsFoundation/Swift-Protocol.h>

@class NFCallbackStore, NSString;

@protocol NFDefinitionContainer;

@interface NFCallbackRegistration : NSObject <Swift>

{
    NFCallbackStore *_callbackStore;
    id <NFDefinitionContainer> _privateContainer;
}

@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (nonatomic, readonly) id <NFDefinitionContainer> privateContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCallbackStore:(id)arg1 privateContainer:(id)arg2;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;

@end
