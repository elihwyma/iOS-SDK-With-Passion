/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSArray, NSString;

@interface WFMessageTrigger : WFTrigger

{
    NSString *_selectedContents;
    NSArray *_selectedSenders;
    NSArray *_selectedSendersStrings;
}

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

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
