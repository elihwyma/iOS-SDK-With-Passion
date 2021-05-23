/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TSUAdditions)

@property (nonatomic, readonly) struct CGSize naturalSizeWithPreferredTransforms;

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;

@end
