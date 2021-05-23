/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFCallbackStore, NSMutableDictionary, NSString;

@interface NFContext : NSObject

{
    NFCallbackStore *_callbackStore;
    NSMutableDictionary *_objects;
}

@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)mergeWithContext:(id)arg1;
- (id)resolveForKey:(id)arg1;
- (id)initWithCallbackStore:(id)arg1;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forProtocol:(id)arg2;
- (void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forKey:(id)arg2;
- (void)unsafeUseObject:(id)arg1 forKey:(id)arg2 name:(id)arg3;

@end
