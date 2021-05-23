/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec, PXTitleSubtitleUILabel, UIView;

@interface PXTitleSubtitleUILabelTile : NSObject <Swift>

{
    UIView *_view;
    PXTitleSubtitleUILabel *_label;
    _Bool _rendersTextAsynchronously;
    NSString *_title;
    NSString *_subtitle;
    PXTitleSubtitleLabelSpec *_labelSpec;
    long long __animationCount;
}

@property (nonatomic, setter=_setAnimationCount:) long long _animationCount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic, readonly) PXTitleSubtitleLabelSpec *labelSpec;
@property (nonatomic) _Bool rendersTextAsynchronously;
@property (nonatomic, readonly) double lastBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (id)init;
- (void)prepareForReuse;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateLabelTitleAndSubtitle;

@end
