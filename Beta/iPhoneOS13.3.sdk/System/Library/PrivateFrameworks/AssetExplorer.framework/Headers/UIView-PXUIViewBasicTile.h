/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (PXUIViewBasicTile)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (id)associatedAssetUUID;
- (void)setAssociatedAssetUUID:(id)arg1;

@end
