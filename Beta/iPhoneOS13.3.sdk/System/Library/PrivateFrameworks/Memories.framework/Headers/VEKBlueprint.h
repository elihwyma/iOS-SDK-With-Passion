/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroBlueprint, NSString, VEKSong;

@interface VEKBlueprint : NSObject

{
    long long _mood;
    VEKSong *_song;
    long long _titleStyle;
    long long _editStyle;
    MiroBlueprint *_data;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) long long mood;
@property (copy, nonatomic) VEKSong *song;
@property (nonatomic) long long titleStyle;
@property (nonatomic) long long editStyle;
@property (retain, nonatomic) MiroBlueprint *data;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)moodIDForVEKMood:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)moodIDmap;
- (id)initWithMood:(long long)arg1;
- (double)idealDurationForAsset:(id)arg1;
- (long long)moodForMoodID:(id)arg1;
- (id)moodIDForMood:(long long)arg1;

@end
