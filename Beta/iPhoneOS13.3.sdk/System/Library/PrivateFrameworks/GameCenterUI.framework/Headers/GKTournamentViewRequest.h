/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKTournament, NSString, UIColor;

@interface GKTournamentViewRequest : NSObject

{
    GKTournament *_tournament;
    long long _playerGroup;
    long long _viewType;
    long long _appearanceStyle;
    UIColor *_tintColor;
    UIColor *_secondaryTintColor;
    NSString *_tournamentDefinitionID;
}

@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) long long playerGroup;
@property (nonatomic) long long viewType;
@property (nonatomic) long long appearanceStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *secondaryTintColor;
@property (retain, nonatomic) NSString *tournamentDefinitionID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewType:(long long)arg1 tournamentDefinitionID:(id)arg2;

@end
