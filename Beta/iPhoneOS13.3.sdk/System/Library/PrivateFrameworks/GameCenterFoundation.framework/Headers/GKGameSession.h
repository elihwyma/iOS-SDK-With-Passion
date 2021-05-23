/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKCloudPlayer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface GKGameSession : NSObject

{
    NSString *_identifier;
    NSString *_title;
    GKCloudPlayer *_owner;
    NSArray *_players;
    NSDate *_lastModifiedDate;
    GKCloudPlayer *_lastModifiedPlayer;
    long long _maxNumberOfConnectedPlayers;
    NSString *_serverChangeTag;
    NSMutableDictionary *_playerStates;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) NSString *serverChangeTag;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKCloudPlayer *owner;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property (retain, nonatomic) NSString *serverChangeTag;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (nonatomic, readonly) NSArray *badgedPlayers;

+ (_Bool)supportsSecureCoding;
+ (void)addEventListener:(id)arg1;
+ (void)removeEventListener:(id)arg1;
+ (id)gk_sessionEventListeners;
+ (void)postSession:(id)arg1 didAddPlayer:(id)arg2;
+ (void)postSession:(id)arg1 didRemovePlayer:(id)arg2;
+ (void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
+ (void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
+ (void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
+ (void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
+ (void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getSessionsForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)descriptionSubstitutionMap;
- (void)updateWithSession:(id)arg1;
- (void)setConnectionState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)playersWithConnectionState:(long long)arg1;
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
