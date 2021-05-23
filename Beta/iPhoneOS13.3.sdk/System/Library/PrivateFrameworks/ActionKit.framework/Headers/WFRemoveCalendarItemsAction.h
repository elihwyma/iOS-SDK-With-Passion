/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFRemoveCalendarItemsAction : WFAction

{
    unsigned long long _requiredConfirmations;
    unsigned long long _currentConfirmation;
}

@property (nonatomic) unsigned long long requiredConfirmations;
@property (nonatomic) unsigned long long currentConfirmation;

- (unsigned long long)entityType;
- (void)deleteItems:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)accessResource;
- (void)presentConfirmationToDeleteItems:(id)arg1;

@end
