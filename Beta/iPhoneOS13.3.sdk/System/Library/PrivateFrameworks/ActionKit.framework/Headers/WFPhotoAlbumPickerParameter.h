/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSString, WFPhotoAccessResource;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
    WFPhotoAccessResource *_photoAccessResource;
}

@property (retain, nonatomic) WFPhotoAccessResource *photoAccessResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)referencedActionResourceClasses;
+ (_Bool)hasPhotosAccess;

- (id)possibleStates;
- (void)photoLibraryDidChange:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)arg1;
- (void)resourceAvailabilityChanged;

@end
