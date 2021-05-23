/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <Swift>

{
    long long _shuffleType;
    long long _repeatType;
    NSDictionary *_startTimes;
    NSDictionary *_endTimes;
}

@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic, readonly) NSDictionary *startTimes;
@property (nonatomic, readonly) NSDictionary *endTimes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;

@end
