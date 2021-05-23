/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WLKPlayEvent : NSObject

{
    _Bool _played;
    NSString *_bundleID;
    NSString *_channelID;
    NSString *_externalPlayableID;
    NSString *_showID;
    double _elapsedTime;
    double _duration;
    NSDate *_occurrenceDate;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *externalPlayableID;
@property (copy, nonatomic, readonly) NSString *showID;
@property (nonatomic, readonly, getter=isPlayed) _Bool played;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSDate *occurrenceDate;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
