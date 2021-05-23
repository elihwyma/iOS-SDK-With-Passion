/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAppLayout, SBDisplayItem, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject

{
    _Bool _fromFullSizeSnapshotRequest;
    _Bool _needsUpdate;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItem;
    XBApplicationSnapshot *_snapshot;
    UIImage *_snapshotImage;
}

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *displayItem;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (nonatomic, readonly) long long role;
@property (nonatomic) _Bool fromFullSizeSnapshotRequest;
@property (nonatomic) _Bool needsUpdate;

- (id)description;

@end
