/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSSet, NSString;

@interface CLSNowPlayingStreamEventMetadata : NSObject

{
    NSString *_album;
    NSString *_artist;
    NSString *_title;
    NSNumber *_durationInSeconds;
    NSSet *_genres;
    NSString *_source;
}

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *durationInSeconds;
@property (copy, nonatomic) NSSet *genres;
@property (copy, nonatomic) NSString *source;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToEventMetadata:(id)arg1;
- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end
