/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMMediaPlaybackAction.h>

@class MPPlaybackArchive, NSNumber, NSSet;

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction

@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
