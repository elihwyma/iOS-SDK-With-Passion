/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSString, NTKCFaceDetailExpandableDescriptionCell;

@protocol NTKCFaceDetailDescriptionSectionDelegate;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController

{
    _Bool _external;
    id <NTKCFaceDetailDescriptionSectionDelegate> _delegate;
}

@property (nonatomic) _Bool external;
@property (retain, nonatomic) NTKCFaceDetailExpandableDescriptionCell *cell;
@property (nonatomic) _Bool expanded;
@property (weak, nonatomic) id <NTKCFaceDetailDescriptionSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasDescriptionSectionForFace:(id)arg1 inGallery:(_Bool)arg2 orExternal:(_Bool)arg3;
+ (id)_descriptionForFace:(id)arg1 inGallery:(_Bool)arg2 orExternal:(_Bool)arg3;

- (void)_commonInit;
- (id)titleForHeader;
- (void)descriptionCellDidExpand:(id)arg1;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 external:(_Bool)arg4;
- (id)_faceDescription;

@end
