/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ContentKit/WFContentItem.h>

@class NSString;

@interface WFContentItem (ActivityItemPresentationPreparation)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (void)prepareForActivityItemPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldUseObjectRepresentation;

@end
