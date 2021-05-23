/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponentScopeHandle;

@interface CKComponentScopeFrame : NSObject

{
    struct unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::__1::hash<_CKStateScopeKey>, std::__1::equal_to<_CKStateScopeKey>, std::__1::allocator<std::__1::pair<const _CKStateScopeKey, CKComponentScopeFrame *>>> _children;
    CKComponentScopeHandle *_handle;
}

@property (nonatomic, readonly) CKComponentScopeHandle *handle;

+ (struct CKComponentScopeFramePair)childPairForPair:(const struct CKComponentScopeFramePair *)arg1 newRoot:(id)arg2 componentClass:(Class)arg3 identifier:(id)arg4 initialStateCreator:(CDUnknownBlockType)arg5 stateUpdates:(const unordered_multimap_8347d0c8 *)arg6;

- (id).cxx_construct;
- (id)initWithHandle:(id)arg1;

@end
