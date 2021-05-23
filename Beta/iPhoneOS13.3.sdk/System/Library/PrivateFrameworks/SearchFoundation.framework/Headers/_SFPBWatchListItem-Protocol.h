/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString;

@protocol _SFPBWatchListItem <Swift>

@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property (copy, nonatomic) NSString *continueInTextFormat;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) NSString *installButtonTitle;
@property (copy, nonatomic) NSString *purchaseOfferTextFormat;
@property (copy, nonatomic) NSString *inUpNextText;
@property (copy, nonatomic) NSString *addToUpNextText;
@property (copy, nonatomic) NSString *addedToUpNextText;
@property (copy, nonatomic) NSString *watchLiveTextFormat;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
