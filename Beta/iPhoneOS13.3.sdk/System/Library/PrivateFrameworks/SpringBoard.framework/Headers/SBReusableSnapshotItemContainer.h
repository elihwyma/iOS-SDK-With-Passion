/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherItemContainer.h>

@class NSString, SBAppLayout;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer

{
    SBAppLayout *_snapshotAppLayout;
}

@property (retain, nonatomic) SBAppLayout *snapshotAppLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setContentView:(id)arg1;
- (id)_snapshotView;

@end
