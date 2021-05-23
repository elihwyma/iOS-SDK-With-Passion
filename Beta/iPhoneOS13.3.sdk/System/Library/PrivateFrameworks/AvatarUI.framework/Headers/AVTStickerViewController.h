/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarPickerDataSource, AVTAvatarRecordDataSource, AVTPaddleView, AVTSimpleAvatarPicker, AVTStickerPagingController, AVTUIEnvironment, NSString, UIView;

@protocol AVTAvatarStore, AVTPresenterDelegate, AVTStickerDisclosureValidationDelegate, AVTUILogger;

@interface AVTStickerViewController : UIViewController <Swift>

{
    _Bool _allowEditing;
    _Bool _allowPeel;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
    id <AVTAvatarStore> _store;
    AVTAvatarRecordDataSource *_recordDataSource;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    AVTAvatarPickerDataSource *_avatarPickerDataSource;
    AVTSimpleAvatarPicker *_avatarPicker;
    AVTStickerPagingController *_pagingController;
    NSString *_selectedRecordIdentifier;
    AVTPaddleView *_paddleView;
}

@property (nonatomic, readonly) id <AVTAvatarStore> store;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *recordDataSource;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) _Bool allowEditing;
@property (nonatomic, readonly) _Bool allowPeel;
@property (retain, nonatomic) AVTAvatarPickerDataSource *avatarPickerDataSource;
@property (retain, nonatomic) AVTSimpleAvatarPicker *avatarPicker;
@property (retain, nonatomic) AVTStickerPagingController *pagingController;
@property (retain, nonatomic) NSString *selectedRecordIdentifier;
@property (retain, nonatomic) AVTPaddleView *paddleView;
@property (weak, nonatomic) id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;

+ (unsigned long long)minimumNumberOfVisibleItemForWidth:(double)arg1;
+ (id)stickersAvatarsFetchRequest;
+ (double)headerHeightForWidth:(double)arg1 interitemSpacing:(double)arg2;
+ (id)stickerViewControllerForStore:(id)arg1 allowEditing:(_Bool)arg2 allowPeel:(_Bool)arg3;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateHeaderSize;
- (void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2;
- (void)presentAvatarUIController:(id)arg1 animated:(_Bool)arg2;
- (void)stickerPagingController:(id)arg1 pageDidScrollToOffset:(struct CGPoint)arg2;
- (void)dismissAvatarUIControllerAnimated:(_Bool)arg1;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)avatarPickerDidEndCameraSession:(id)arg1;
- (void)avatarPickerWillStartCameraSession:(id)arg1;
- (void)paddleViewTapped:(id)arg1;
- (void)paddleViewWantsToBeDismissed:(id)arg1;
- (void)presentMemojiEditorForCreation;
- (id)initWithStore:(id)arg1 selectedRecordIdentifier:(id)arg2 allowEditing:(_Bool)arg3 allowPeel:(_Bool)arg4 environment:(id)arg5;
- (void)updatePagingControllerInsets;
- (_Bool)shouldPresentPaddleView;
- (void)selectAvatarRecordAtIndex:(long long)arg1 hideHeader:(_Bool)arg2;
- (void)selectDefaultAvatarIfNeeded;
- (void)presentPaddleViewIfNeeded;
- (void)updateHeaderPositionWithContentOffset:(struct CGPoint)arg1;
- (void)updatePaddleViewLayoutIfNecessary;
- (void)selectRecordForIdentifier:(id)arg1;
- (void)updateScrollToShowAvatarPicker:(_Bool)arg1;
- (double)headerMaxY;
- (void)reloadPickerView;
- (_Bool)allowAvatarCreation;
- (void)dismissPaddleViewIfNecessary;
- (void)stickerControllerDidEnterBackground;
- (void)stickerControllerWillEnterForeground;
- (void)editCurrentMemoji;
- (void)swipeRightWithDelay:(long long)arg1 forCompletionHandler:(CDUnknownBlockType)arg2;
- (void)swipeLeftWithDelay:(long long)arg1 forCompletionHandler:(CDUnknownBlockType)arg2;

@end
