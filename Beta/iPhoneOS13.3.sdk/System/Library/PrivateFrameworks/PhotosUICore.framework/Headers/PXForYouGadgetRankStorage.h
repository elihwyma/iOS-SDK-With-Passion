/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXForYouGadgetRankStorage : NSObject

- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;
- (void)resetStoredRanks;
- (id)_keyForGadgetType:(unsigned long long)arg1;

@end
