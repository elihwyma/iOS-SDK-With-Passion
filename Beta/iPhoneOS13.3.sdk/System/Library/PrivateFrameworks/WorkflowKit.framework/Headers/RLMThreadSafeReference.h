/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface RLMThreadSafeReference : NSObject

{
    unique_ptr_d0e912ad _reference;
    id _metadata;
    Class _type;
}

@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

+ (id)referenceWithThreadConfined:(id)arg1;

- (id).cxx_construct;
- (id)resolveReferenceInRealm:(id)arg1;
- (id)initWithThreadConfined:(id)arg1;

@end
