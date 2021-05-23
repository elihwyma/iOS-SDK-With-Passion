/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaQuerySectionInfo.h>

@class NSArray;

@interface MPMediaQueryMutableSectionInfo : MPMediaQuerySectionInfo

@property (copy, nonatomic) NSArray *sectionIndexTitles;

- (void)addSectionWithHeaderTitle:(id)arg1 sectionIndexTitleIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;

@end
