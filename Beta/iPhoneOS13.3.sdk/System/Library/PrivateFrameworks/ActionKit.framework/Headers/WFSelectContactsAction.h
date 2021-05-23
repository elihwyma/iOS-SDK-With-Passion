/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFSelectContactsAction : WFAction

@property (nonatomic, readonly) NSArray *contactPropertyIDs;
@property (nonatomic, readonly) _Bool selectMultiple;

- (void)outputContacts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
