/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NTKCFaceDetailActionCell;

@protocol NTKCFaceDetailActionSectionDelegate;

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController

{
    id <NTKCFaceDetailActionSectionDelegate> _delegate;
    NTKCFaceDetailActionCell *_selectCell;
    NTKCFaceDetailActionCell *_deleteCell;
}

@property (retain, nonatomic) NTKCFaceDetailActionCell *selectCell;
@property (retain, nonatomic) NTKCFaceDetailActionCell *deleteCell;
@property (weak, nonatomic) id <NTKCFaceDetailActionSectionDelegate> delegate;

- (void)_commonInit;
- (long long)numberOfRows;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)_spacerCell;
- (long long)_actionForRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;

@end
