/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKSnapshotCacheKey, IMBalloonPlugin, UIView;

@interface CKBrowserSwitcherCell : UICollectionViewCell

{
    _Bool _usingFallbackSnapshot;
    IMBalloonPlugin *_plugin;
    UIView *_browserSnapshotView;
    UIView *_extensionInterruptedView;
    CKSnapshotCacheKey *_snapshotCacheKey;
}

@property (retain, nonatomic) UIView *browserSnapshotView;
@property (retain, nonatomic) UIView *extensionInterruptedView;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) CKSnapshotCacheKey *snapshotCacheKey;
@property (nonatomic, getter=isUsingFallbackSnapshot) _Bool usingFallbackSnapshot;

+ (id)identifier;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_handleBrowserSnapshotDidChange:(id)arg1;
- (void)_updateSnapshotView;
- (void)resetSnapshotView;
- (void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2;
- (void)showExtensionInterruptedView;

@end
