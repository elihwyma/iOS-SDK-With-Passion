/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSMutableArray, NSString, NTKCFaceDetailEditOptionCell;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <Swift>

@property (retain, nonatomic) NTKCFaceDetailEditOptionCell *cell;
@property (retain, nonatomic) NSMutableArray *rows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSelectedOptions:(id)arg1;
- (void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)reloadActionRow;
- (Class)editCellClass;

@end
