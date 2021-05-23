/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal

{
    NSString *_reason;
    NSString *_engineID;
}

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *engineID;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)initWithGame:(id)arg1;
- (id)serverRepresentation;

@end
