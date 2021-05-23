/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue

{
    _Bool _needsPreparation;
}

@property _Bool needsPreparation;

- (id)init;
- (void)prepareIfNeeded;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;

@end
