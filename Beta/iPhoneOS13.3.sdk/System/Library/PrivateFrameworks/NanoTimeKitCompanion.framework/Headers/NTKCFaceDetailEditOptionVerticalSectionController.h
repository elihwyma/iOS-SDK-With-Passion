/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

@class NSMutableArray, NSString, NTKCFaceDetailDescriptionCell;

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController

{
    NTKCFaceDetailDescriptionCell *_footerCell;
    NSString *_footer;
}

@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailDescriptionCell *footerCell;
@property (retain, nonatomic) NSString *footer;

- (long long)numberOfRows;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (void)setSelectedOptions:(id)arg1;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)reloadActionRow;
- (void)_setupWithCollection:(id)arg1;
- (id)_overrideTextForOption:(id)arg1;
- (void)_refreshOverrideTexts;

@end
