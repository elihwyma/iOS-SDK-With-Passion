/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCell.h>

@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell

{
    id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
    long long _userOptionIndex;
}

@property (weak, nonatomic) id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
@property (nonatomic) long long userOptionIndex;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_setupFromCollection;
- (void)selectUserOption;

@end
