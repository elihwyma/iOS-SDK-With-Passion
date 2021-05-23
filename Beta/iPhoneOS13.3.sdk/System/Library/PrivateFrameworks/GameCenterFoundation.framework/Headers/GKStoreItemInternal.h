/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface GKStoreItemInternal : GKInternalRepresentation

{
    NSNumber *_adamID;
    NSString *_artistName;
    NSString *_priceDisplay;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    _Bool _owned;
}

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *priceDisplay;
@property (retain, nonatomic) NSURL *viewItemURL;
@property (retain, nonatomic) NSURL *shortViewItemURL;
@property (retain, nonatomic) NSURL *tellAFriendMessageContentsUrl;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned int numberOfUserRatings;
@property (nonatomic) float averageUserRating;
@property (nonatomic) _Bool owned;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3;
- (void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
