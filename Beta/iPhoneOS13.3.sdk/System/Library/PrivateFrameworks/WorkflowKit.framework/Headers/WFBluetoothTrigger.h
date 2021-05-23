/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

{
    NSArray *_selectedDevices;
    unsigned long long _selection;
}

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end
