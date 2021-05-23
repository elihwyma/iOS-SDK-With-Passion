/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPMutableRadioIdentifiers <Swift>

@property (copy, nonatomic) NSString *stationStringID;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) long long stationID;

@end
