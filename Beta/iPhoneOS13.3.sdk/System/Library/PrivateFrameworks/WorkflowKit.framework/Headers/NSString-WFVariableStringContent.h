/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSString.h>

@interface NSString (WFVariableStringContent)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)wf_getContentItemsWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)wf_lengthInVariableString;
- (id)wf_trimmedString;
- (_Bool)wf_isEmpty;

@end
