/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MPMutableUniversalStoreIdentifiers <Swift>

@property (copy, nonatomic) NSString *globalPlaylistID;
@property (nonatomic) long long adamID;
@property (copy, nonatomic) NSArray *formerAdamIDs;
@property (copy, nonatomic) NSString *universalCloudLibraryID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long subscriptionAdamID;
@property (copy, nonatomic) NSString *socialProfileID;
@property (copy, nonatomic) NSString *informalMediaClipID;
@property (copy, nonatomic) NSString *informalStaticAssetID;

@end
