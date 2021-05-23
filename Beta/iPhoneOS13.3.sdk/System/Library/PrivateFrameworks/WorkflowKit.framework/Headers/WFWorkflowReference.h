/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowReference : WFDatabaseObjectDescriptor

{
    _Bool _isDeleted;
    NSString *_name;
    NSString *_subtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    WFWorkflowIcon *_icon;
}

@property (copy, nonatomic, readonly) NSString *wfName;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *actionsDescription;
@property (copy, nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic, readonly) _Bool isDeleted;

+ (_Bool)supportsSecureCoding;
+ (id)workflowReferenceConsumingSingleUseToken:(id)arg1 error:(id *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventDictionary;
- (id)generateSingleUseToken;
- (id)speakableString;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 subtitle:(id)arg3 actionsDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 icon:(id)arg6 isDeleted:(_Bool)arg7;
- (id)externalURLForRunningWithSource:(id)arg1;
- (id)externalURLForViewing;
- (void)donateRunInteraction;
- (void)deleteAssociatedInteractions;

@end
