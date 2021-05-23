/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSMutableArray, NSSet, NSString, NTKCFaceDetailComplicationPickerCell, NTKCFaceDetailComplicationsHiddenCell, NTKFaceView;

@protocol NTKCFaceDetailComplicationSectionDelegate;

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController

{
    id <NTKCFaceDetailComplicationSectionDelegate> _delegate;
    NTKFaceView *_faceView;
    NTKCFaceDetailComplicationPickerCell *_pickerCell;
    NTKCFaceDetailComplicationPickerCell *_dismissingPickerCell;
    NTKCFaceDetailComplicationsHiddenCell *_hiddenCell;
    NSSet *_richComplicationSlots;
}

@property (retain, nonatomic) NTKFaceView *faceView;
@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailComplicationPickerCell *pickerCell;
@property (retain, nonatomic) NTKCFaceDetailComplicationPickerCell *dismissingPickerCell;
@property (retain, nonatomic) NTKCFaceDetailComplicationsHiddenCell *hiddenCell;
@property (retain, nonatomic) NSSet *richComplicationSlots;
@property (weak, nonatomic) id <NTKCFaceDetailComplicationSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasComplicationsForFace:(id)arg1;

- (void)_commonInit;
- (double)heightForRow:(long long)arg1;
- (id)titleForHeader;
- (void)complicationPickerCell:(id)arg1 didSelectComplication:(id)arg2;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 faceView:(id)arg3 inGallery:(_Bool)arg4;
- (void)_addComplication:(id)arg1;
- (void)toggleRow:(long long)arg1 shouldScroll:(_Bool)arg2;
- (void)_dequeuePickerCellForRow:(long long)arg1;
- (void)_refreshPickerCellIfNeededForSelectedRow:(long long)arg1;

@end
