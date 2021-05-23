/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSString, NTKCFaceDetailMonogramComplicationCell, NTKCFaceDetailMonogramEditCell, NTKCFaceDetailShowSecondsCell;

@protocol NTKCFaceDetailOtherSectionDelegate;

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController

{
    id <NTKCFaceDetailOtherSectionDelegate> _delegate;
    NTKCFaceDetailMonogramComplicationCell *_monogramCell;
    NTKCFaceDetailMonogramEditCell *_monogramEditCell;
    NTKCFaceDetailShowSecondsCell *_showSecondsCell;
}

@property (retain, nonatomic) NTKCFaceDetailMonogramComplicationCell *monogramCell;
@property (retain, nonatomic) NTKCFaceDetailMonogramEditCell *monogramEditCell;
@property (retain, nonatomic) NTKCFaceDetailShowSecondsCell *showSecondsCell;
@property (weak, nonatomic) id <NTKCFaceDetailOtherSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_commonInit;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(_Bool)arg2;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (void)addMonogramRowForSlot:(id)arg1;
- (void)addShowSecondsRow:(id)arg1;
- (void)_addMonogramEditRow;
- (void)removeMonogramRow;
- (void)removeShowSecondsRow;
- (void)_removeMonogramEditRow;

@end
