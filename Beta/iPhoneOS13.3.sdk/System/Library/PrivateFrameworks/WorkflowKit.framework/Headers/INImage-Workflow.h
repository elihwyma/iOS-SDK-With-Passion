/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INImage.h>

@class NSString;

@interface INImage (Workflow)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)wf_contentItemClass;

- (id)wf_contentItemWithCodableAttribute:(id)arg1;
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
