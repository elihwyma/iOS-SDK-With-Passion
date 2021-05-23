/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDropProposal.h>

@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal

{
    long long _intent;
    NSIndexPath *_adjustedTargetIndexPath;
}

@property (nonatomic) long long intent;
@property (retain, nonatomic, getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:) NSIndexPath *adjustedTargetIndexPath;
@property (nonatomic, readonly) long long _dropLocation;

- (id)initWithDropOperation:(unsigned long long)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2;
- (id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3;
- (long long)_dropAction;

@end
