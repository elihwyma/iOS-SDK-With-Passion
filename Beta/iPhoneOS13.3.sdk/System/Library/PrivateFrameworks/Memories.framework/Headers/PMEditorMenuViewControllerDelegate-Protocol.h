/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class VEKProduction;

@protocol PMEditorMenuViewControllerDelegate <Swift>

@property (nonatomic, readonly) unsigned long long numberOfClipsInMovie;
@property (nonatomic, readonly) VEKProduction *production;
@property (nonatomic, readonly) double sequenceDuration;

- (unsigned short)prepareLayoutForCollapsedMode;
- (unsigned short)prepareLayoutForSpiltMode;
- (unsigned short)showTitleEditorViewController;
- (unsigned short)showMusicPickerViewController;
- (unsigned short)showContentEditorViewController;
- (unsigned short)showDurationEditorViewController;
- (unsigned short)showKeyAssetSelectionPicker;
- (unsigned short)showDebugTitleStylePickerViewController;
- (unsigned short)showDebugEditStylePickerViewController;
- (unsigned short)showDebugTransitionPickerViewController;
- (unsigned short)showDebugFilterPickerViewController;

@end
