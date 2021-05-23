/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem

{
    unsigned long long _persistentID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (id)defaultPropertyValues;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (void)incrementPlayCount;
- (id)mediaLibrary;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (_Bool)existsInLibrary;
- (id)valuesForProperties:(id)arg1;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (double)nominalHasBeenPlayedThreshold;
- (_Bool)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
