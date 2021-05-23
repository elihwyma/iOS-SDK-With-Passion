/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFiCloudDriveAccessResource *_iCloudDriveAccessResource;
}

@property (retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource;

+ (id)referencedActionResourceClasses;

- (_Bool)isHidden;
- (id)possibleStates;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)arg1;

@end
