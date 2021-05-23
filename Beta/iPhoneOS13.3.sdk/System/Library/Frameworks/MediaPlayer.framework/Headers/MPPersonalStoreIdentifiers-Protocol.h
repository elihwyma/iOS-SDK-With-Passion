/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPPersonalStoreIdentifiers <Swift>

@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (copy, nonatomic, readonly) NSString *cloudAlbumID;
@property (copy, nonatomic, readonly) NSString *recommendationID;

@end
