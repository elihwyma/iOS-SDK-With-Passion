/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@interface _CKComponentMemoizerImpl : NSObject

{
    _CKComponentMemoizerImpl *_next;
    struct unordered_multimap<CKMemoizationKey, CKComponent *, std::__1::hash<CKMemoizationKey>, std::__1::equal_to<CKMemoizationKey>, std::__1::allocator<std::__1::pair<const CKMemoizationKey, CKComponent *>>> componentCache_;
    struct unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::__1::allocator<std::__1::pair<const CKLayoutMemoizationKey, CKComponentLayout>>> layoutCache_;
}

+ (id)currentMemoizer;
+ (void)setCurrentMemoizer:(id)arg1;

- (id)next;
- (id).cxx_construct;
- (id)dequeueComponentForKey:(struct CKMemoizationKey)arg1;
- (void)enqueueComponent:(id)arg1 forKey:(struct CKMemoizationKey)arg2;
- (struct CKComponentLayout)cachedLayout:(id)arg1 thatFits:(struct CKSizeRange)arg2 restrictedToSize:(struct CKComponentSize)arg3 parentSize:(struct CGSize)arg4 block:(CDUnknownBlockType)arg5;

@end
