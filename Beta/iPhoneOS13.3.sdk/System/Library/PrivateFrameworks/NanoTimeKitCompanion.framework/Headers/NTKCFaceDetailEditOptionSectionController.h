/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSDictionary, NTKCFaceDetailRowActionCell, NTKEditOptionCollection, NTKFaceView;

@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController

{
    NTKEditOptionCollection *_collection;
    NTKFaceView *_faceView;
    NSDictionary *_selectedOptions;
    id <NTKCFaceDetailEditOptionSectionDelegate> _delegate;
    Class _editCellClass;
    NTKCFaceDetailRowActionCell *_actionRow;
}

@property (retain, nonatomic) NTKEditOptionCollection *collection;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (retain, nonatomic) NTKCFaceDetailRowActionCell *actionRow;
@property (retain, nonatomic) NSDictionary *selectedOptions;
@property (weak, nonatomic) id <NTKCFaceDetailEditOptionSectionDelegate> delegate;
@property (nonatomic, readonly) Class editCellClass;

- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)faceDidChange;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)_refreshActionRowContent;
- (id)_actionNameForOption:(id)arg1;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (id)_initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (_Bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (_Bool)_handleDidSelectOption:(id)arg1;
- (_Bool)_handleDidSelectActionRowForOption:(id)arg1;
- (void)reloadActionRow;
- (void)_dequeueActionRow;

@end
