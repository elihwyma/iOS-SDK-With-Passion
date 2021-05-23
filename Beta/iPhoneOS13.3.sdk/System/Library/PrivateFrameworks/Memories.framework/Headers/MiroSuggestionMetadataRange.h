/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroMetadataRange.h>

@class VEKSuggestion;

__attribute__((visibility("hidden")))
@interface MiroSuggestionMetadataRange : MiroMetadataRange

{
    VEKSuggestion *_suggestion;
}

@property (retain, nonatomic) VEKSuggestion *suggestion;

- (id)initWithSuggestion:(id)arg1;

@end
