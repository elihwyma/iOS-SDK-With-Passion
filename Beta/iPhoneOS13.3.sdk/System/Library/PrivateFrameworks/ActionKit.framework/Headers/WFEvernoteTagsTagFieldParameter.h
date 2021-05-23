/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDynamicTagFieldParameter.h>

@class NSString, WFEvernoteAccessResource;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter

{
    WFEvernoteAccessResource *_evernoteAccessResource;
}

@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)referencedActionResourceClasses;

- (void)wasAddedToWorkflow;
- (id)suggestedTagsForTagField:(id)arg1;
- (void)setActionResources:(id)arg1;
- (void)updateTags;

@end
