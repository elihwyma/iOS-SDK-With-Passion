/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <Swift>

{
    struct BasicRow<realm::Table> _row;
    struct RLMClassInfo *_info;
    Class _objectClass;
}

@property (nonatomic, readonly) RLMObjectBase *object;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (id).cxx_construct;

@end
