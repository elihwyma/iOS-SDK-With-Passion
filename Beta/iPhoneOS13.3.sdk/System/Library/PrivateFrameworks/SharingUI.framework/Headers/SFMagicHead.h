/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSProgress, NSUUID, SFAirDropNode, SFCircleProgressView, SFMagicHeadSettings, SFMagicHeadShadowView, SFPersonImageView, UIAirDropNode;

@protocol SFMagicHeadDelegate;

__attribute__((visibility("hidden")))
@interface SFMagicHead : UIView

{
    double _containerRadius;
    UIView *_contentView;
    SFMagicHeadShadowView *_shadowView;
    SFPersonImageView *_imageView;
    SFCircleProgressView *_circleProgressView;
    NSArray *_progressKeyPaths;
    long long _cellState;
    _Bool _isMagicHead;
    _Bool _pointedAt;
    _Bool _stateBeingRestored;
    NSObject<SFMagicHeadDelegate> *_delegate;
    SFMagicHeadSettings *_settings;
    SFAirDropNode *_node;
    UIAirDropNode *_slotNode;
    NSUUID *_nodeIdentifier;
    double _degreeOffset;
    long long _size;
    long long _position;
    NSProgress *_progress;
    UIView *_imageSlotView;
}

@property (nonatomic, readonly) UIView *imageSlotView;
@property (weak) NSObject<SFMagicHeadDelegate> *delegate;
@property (retain, nonatomic) SFMagicHeadSettings *settings;
@property (readonly) SFAirDropNode *node;
@property (readonly) UIAirDropNode *slotNode;
@property (nonatomic, readonly) NSUUID *nodeIdentifier;
@property (nonatomic) _Bool highlighted;
@property (readonly) double degreeOffset;
@property _Bool pointedAt;
@property (nonatomic) long long size;
@property (nonatomic) long long position;
@property _Bool stateBeingRestored;
@property (retain, nonatomic) NSProgress *progress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userDidCancel;
- (id)initWithNode:(id)arg1 slotNode:(id)arg2 containerRadius:(double)arg3 delegate:(id)arg4 settings:(id)arg5;
- (void)setPositionDegreeOffsetWithOffset:(double)arg1;
- (void)resetTransferState;
- (void)userDidSelect;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)setCellState:(long long)arg1 animated:(_Bool)arg2 silent:(_Bool)arg3;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (void)setPosition:(long long)arg1 withOffset:(double)arg2;

@end
