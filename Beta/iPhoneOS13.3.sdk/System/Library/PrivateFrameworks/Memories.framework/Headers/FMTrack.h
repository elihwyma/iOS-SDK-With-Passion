/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FMMixParameters, NSArray;

@interface FMTrack : NSObject

{
    NSArray *_clips;
    FMMixParameters *_mixParameters;
}

@property (retain, nonatomic) NSArray *clips;
@property (retain, nonatomic) FMMixParameters *mixParameters;

- (id)description;
- (id)initWithClips:(id)arg1 mixParameters:(id)arg2;

@end
