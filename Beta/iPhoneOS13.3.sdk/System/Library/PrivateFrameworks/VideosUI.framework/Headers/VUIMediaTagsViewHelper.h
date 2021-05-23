/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDateComponentsFormatter, NSMutableDictionary, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsViewHelper : NSObject

{
    NSMutableDictionary *_tagsViewDictionary;
    NSDateComponentsFormatter *_dateComponentFormatter;
    NSNumberFormatter *_tomatoPercentFormatter;
}

- (id)initWithMediaItem:(id)arg1;
- (id)_releaseDateDescriptionFromDate:(id)arg1;
- (id)_durationDescriptionFromDuration:(id)arg1;
- (_Bool)_isValidNumber:(id)arg1;
- (id)_commonSenseString:(id)arg1;
- (void)_mediaBagdesWithVUIMediaEntity:(id)arg1;
- (id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2;
- (id)initWithVUIMediaItem:(id)arg1;
- (id)initWithVUIMediaEntity:(id)arg1;
- (id)tagsViewDictionary;
- (void)addSeperatorKey:(id)arg1;

@end
