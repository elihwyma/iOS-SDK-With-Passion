/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MPUniversalStoreIdentifiers <Swift>

@property (copy, nonatomic, readonly) NSString *globalPlaylistID;
@property (nonatomic, readonly) long long adamID;
@property (copy, nonatomic, readonly) NSArray *formerAdamIDs;
@property (copy, nonatomic, readonly) NSString *universalCloudLibraryID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (copy, nonatomic, readonly) NSString *socialProfileID;
@property (copy, nonatomic, readonly) NSString *informalMediaClipID;
@property (copy, nonatomic, readonly) NSString *informalStaticAssetID;

@end
