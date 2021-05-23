/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBBulletin, NSArray, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject

{
    _Bool _cancelled;
    NSArray *_gateways;
    BBBulletin *_bulletin;
    unsigned long long _feeds;
    double _gatewayTimeout;
    NSMutableSet *_gatewaysPlayedLightsAndSirens;
}

@property (retain, nonatomic) NSMutableSet *gatewaysPlayedLightsAndSirens;
@property (nonatomic) _Bool cancelled;
@property (copy, nonatomic) NSArray *gateways;
@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feeds;
@property (nonatomic) double gatewayTimeout;

- (id)init;
- (void)cancel;
- (void)enumerateWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(_Bool)arg1;
- (id)defaultGateway;

@end
