/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, PHAsset, UIImageView, UILabel;

@protocol PMDebugCollectionViewControllerProtocol;

@interface PMDebugCollectionViewCell : UICollectionViewCell

{
    UIImageView *_thumbnailView;
    UILabel *_data1Label;
    UILabel *_data2Label;
    UILabel *_data3Label;
    UILabel *_date1Label;
    UILabel *_date2Label;
    UILabel *_date3Label;
    NSString *_editStyleStr;
    PHAsset *_asset;
    id <PMDebugCollectionViewControllerProtocol> _delegate;
}

@property (weak, nonatomic) id <PMDebugCollectionViewControllerProtocol> delegate;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *data1Label;
@property (retain, nonatomic) UILabel *data2Label;
@property (retain, nonatomic) UILabel *data3Label;
@property (retain, nonatomic) UILabel *date1Label;
@property (retain, nonatomic) UILabel *date2Label;
@property (retain, nonatomic) UILabel *date3Label;
@property (retain, nonatomic) NSString *editStyleStr;

+ (_Bool)hasOneGBRAM;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)configureWithAsset:(id)arg1 pickInfo:(id)arg2 delegate:(id)arg3 indexPath:(id)arg4 isSaveMode:(_Bool)arg5 textOnly:(_Bool)arg6 curatedAssets:(id)arg7;
- (void)configureHeader:(_Bool)arg1;
- (void)strokeToverMaxT:(float)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (CDStruct_1b6d18a9)_stingerTime;
- (unsigned long long)countMediaClips:(_Bool)arg1;
- (id)tVsDurationGraph;
- (id)stringForAssetCollectionSubType:(long long)arg1;
- (id)stringForAssetCollectionTypeString:(long long)arg1;
- (id)stringForSize:(unsigned long long)arg1;
- (id)_printImageOrientationforAsset:(id)arg1;
- (id)determineDerivativeUsedFromAsset:(id)arg1;

@end
