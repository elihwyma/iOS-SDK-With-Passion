/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceConfiguration, NSDictionary, NSString;

@interface CKTransactionalComponentDataSourceUpdateConfigurationModification : NSObject

{
    CKTransactionalComponentDataSourceConfiguration *_configuration;
    NSDictionary *_userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)changeFromState:(id)arg1;
- (id)initWithConfiguration:(id)arg1 userInfo:(id)arg2;

@end
