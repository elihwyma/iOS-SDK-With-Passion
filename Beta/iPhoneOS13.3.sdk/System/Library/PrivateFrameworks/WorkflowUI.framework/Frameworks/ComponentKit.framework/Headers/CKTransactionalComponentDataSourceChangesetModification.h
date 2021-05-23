/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceChangeset, NSDictionary, NSString;

@protocol CKComponentStateListener;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject

{
    id <CKComponentStateListener> _stateListener;
    NSDictionary *_userInfo;
    CKTransactionalComponentDataSourceChangeset *_changeset;
}

@property (nonatomic, readonly) CKTransactionalComponentDataSourceChangeset *changeset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)changeFromState:(id)arg1;
- (id)initWithChangeset:(id)arg1 stateListener:(id)arg2 userInfo:(id)arg3;

@end
