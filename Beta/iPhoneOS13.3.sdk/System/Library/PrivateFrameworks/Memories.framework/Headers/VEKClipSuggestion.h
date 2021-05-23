/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEKRangeSuggestion.h>

@protocol VEKClipProtocol;

@interface VEKClipSuggestion : VEKRangeSuggestion

{
    id <VEKClipProtocol> _clip;
}

@property (retain, nonatomic) id <VEKClipProtocol> clip;

- (id)description;
- (id)initWithClipToEmulate:(id)arg1;

@end
