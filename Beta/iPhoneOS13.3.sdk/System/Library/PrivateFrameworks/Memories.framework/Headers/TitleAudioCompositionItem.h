/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieCompositionItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TitleAudioCompositionItem : MovieCompositionItem

{
    NSString *_baseFilename;
}

@property (retain, nonatomic) NSString *baseFilename;

- (id)speedRangesForSourceRange:(CDStruct_e83c9415)arg1 destinationRange:(CDStruct_e83c9415)arg2;
- (id)initWithClip:(id)arg1 themeID:(id)arg2;
- (void)switchToAsset:(int)arg1;
- (_Bool)hasSeparateInOut;

@end
