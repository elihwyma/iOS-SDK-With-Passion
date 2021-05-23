/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject

{
    NSArray *_supportedCommands;
    NSArray *_supportedAssets;
    NSArray *_supportedConfigurations;
    NSArray *_supportedEvents;
    NSArray *_supportedActivations;
    NSArray *_supportedPredicates;
    NSArray *_supportedMessages;
}

@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedAssets;
@property (copy, nonatomic) NSArray *supportedConfigurations;
@property (copy, nonatomic) NSArray *supportedEvents;
@property (copy, nonatomic) NSArray *supportedActivations;
@property (copy, nonatomic) NSArray *supportedPredicates;
@property (copy, nonatomic) NSArray *supportedMessages;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
