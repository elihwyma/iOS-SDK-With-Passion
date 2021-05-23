/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKDispatchGroup, GKMatchRequestInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchResponse : GKInternalRepresentation

{
    int _sequence;
    NSString *_rid;
    NSArray *_matches;
    NSData *_sessionToken;
    NSArray *_relayPushes;
    NSData *_cdxTicket;
    long long _state;
    NSDictionary *_serverRequest;
    GKMatchRequestInternal *_matchRequest;
    GKDispatchGroup *_matchingGroup;
}

@property (nonatomic) long long state;
@property (retain) NSString *rid;
@property (retain) NSArray *matches;
@property (retain) NSData *sessionToken;
@property (retain) NSArray *relayPushes;
@property (retain) NSData *cdxTicket;
@property GKDispatchGroup *matchingGroup;
@property (retain) GKMatchRequestInternal *matchRequest;
@property (retain) NSDictionary *serverRequest;
@property (readonly) int sequence;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)transitionToState:(long long)arg1;
- (int)_incrementSequence;

@end
