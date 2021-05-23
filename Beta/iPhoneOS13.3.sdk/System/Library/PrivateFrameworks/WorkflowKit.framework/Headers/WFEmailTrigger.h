/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger

{
    NSString *_selectedAccount;
    NSString *_selectedSubject;
    NSArray *_selectedRecipients;
    NSArray *_selectedSenders;
    unsigned long long _attachmentConfiguration;
}

@property (retain, nonatomic) NSString *selectedAccount;
@property (retain, nonatomic) NSString *selectedSubject;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (nonatomic) unsigned long long attachmentConfiguration;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
