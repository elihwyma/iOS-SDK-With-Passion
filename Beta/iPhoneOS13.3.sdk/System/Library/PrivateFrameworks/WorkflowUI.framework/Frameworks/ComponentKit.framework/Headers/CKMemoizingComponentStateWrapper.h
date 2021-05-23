/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@interface CKMemoizingComponentStateWrapper : NSObject

{
    id _memoizationState;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void)executeBlockWithMemoizationState:(CDUnknownBlockType)arg1;

@end
