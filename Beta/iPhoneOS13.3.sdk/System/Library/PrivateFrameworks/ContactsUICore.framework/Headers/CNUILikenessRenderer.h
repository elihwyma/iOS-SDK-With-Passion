/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUILikenessRenderer : NSObject

+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysForCaching;
+ (id)rendererWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;
+ (id)cachingRendererWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3;
+ (id)concurrentCachingRendererWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3;
+ (id)cachingRendererWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;

@end
