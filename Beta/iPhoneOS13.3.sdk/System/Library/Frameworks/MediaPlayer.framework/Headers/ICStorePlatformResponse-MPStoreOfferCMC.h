/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <iTunesCloud/ICStorePlatformResponse.h>

@interface ICStorePlatformResponse (MPStoreOfferCMC)

@property (nonatomic, readonly) _Bool mpIsPersonalizedOffer;

+ (_Bool)mpShowBuysWithNoCompletionOffer;
+ (_Bool)mpVerboseCMCLogging;
+ (_Bool)mpFakeCompletionDataForBuys;

- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;

@end
