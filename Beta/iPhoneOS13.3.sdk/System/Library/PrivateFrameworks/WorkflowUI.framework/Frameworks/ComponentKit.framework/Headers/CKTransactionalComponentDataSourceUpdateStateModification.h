/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKTransactionalComponentDataSourceUpdateStateModification : NSObject

{
    unordered_map_097a8478 _stateUpdates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)changeFromState:(id)arg1;
- (id)initWithStateUpdates:(const unordered_map_097a8478 *)arg1;

@end
