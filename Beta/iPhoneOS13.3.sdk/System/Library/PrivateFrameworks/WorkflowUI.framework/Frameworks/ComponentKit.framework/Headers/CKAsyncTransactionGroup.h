/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject

{
    NSHashTable *_containerLayers;
}

- (id)init;
- (void)commit;
- (void)addTransactionContainer:(id)arg1;

@end
