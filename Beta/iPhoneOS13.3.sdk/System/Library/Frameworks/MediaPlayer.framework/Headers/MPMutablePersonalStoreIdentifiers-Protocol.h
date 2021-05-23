/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPMutablePersonalStoreIdentifiers <Swift>

@property (nonatomic) unsigned long long cloudID;
@property (copy, nonatomic) NSString *cloudAlbumID;
@property (copy, nonatomic) NSString *recommendationID;

@end
