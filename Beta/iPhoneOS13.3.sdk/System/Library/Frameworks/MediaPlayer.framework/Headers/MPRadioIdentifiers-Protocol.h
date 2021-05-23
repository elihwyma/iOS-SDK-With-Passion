/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPRadioIdentifiers <Swift>

@property (copy, nonatomic, readonly) NSString *stationStringID;
@property (copy, nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;

@end
