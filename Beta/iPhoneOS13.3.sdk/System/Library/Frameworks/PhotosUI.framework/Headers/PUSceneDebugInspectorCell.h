/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class PUSceneDebugInspectorSceneViewModel, UILabel;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorCell : UITableViewCell

{
    PUSceneDebugInspectorSceneViewModel *_viewModel;
    UILabel *_keywordLabel;
    UILabel *_synonymsLabel;
    UILabel *_sceneIdentifierLabel;
    UILabel *_countLabel;
    UILabel *_isIndexedLabel;
    UILabel *_thresholdLabel;
    UILabel *_coverageLabel;
}

@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UILabel *synonymsLabel;
@property (retain, nonatomic) UILabel *sceneIdentifierLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *isIndexedLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *coverageLabel;
@property (retain, nonatomic) PUSceneDebugInspectorSceneViewModel *viewModel;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
