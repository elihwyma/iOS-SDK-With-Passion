/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSIndexPath.h>

@interface GKMappedIndexPath : NSIndexPath

{
    id _tag;
    NSIndexPath *_sourceIndexPath;
}

@property (retain, nonatomic) id tag;
@property (copy, nonatomic) NSIndexPath *sourceIndexPath;

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4;

- (void)dealloc;
- (id)description;

@end
