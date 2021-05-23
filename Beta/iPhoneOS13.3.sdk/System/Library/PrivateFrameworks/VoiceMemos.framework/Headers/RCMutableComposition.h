/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCComposition.h>

@class NSArray;

@interface RCMutableComposition : RCComposition

@property (retain, nonatomic) NSArray *decomposedFragments;

- (void)recacheComposedDuration;

@end
