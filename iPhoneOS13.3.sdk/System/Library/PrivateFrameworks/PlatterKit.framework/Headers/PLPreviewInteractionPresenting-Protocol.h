//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PLPreviewInteractionManager, UIView;

@protocol PLPreviewInteractionPresenting <NSObject>
@property(readonly, nonatomic) UIView *viewForPreview;
@property(readonly, nonatomic) PLPreviewInteractionManager *previewInteractionManager;

@optional
@property(readonly, nonatomic) CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) CGRect finalPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) CGRect initialPresentedFrameOfViewForPreview;
@end

