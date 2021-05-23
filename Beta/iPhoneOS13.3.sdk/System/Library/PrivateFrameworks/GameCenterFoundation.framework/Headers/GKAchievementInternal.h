/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSDictionary, NSString;

@interface GKAchievementInternal : GKInternalRepresentation

{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    NSDictionary *_icons;
    GKPlayerInternal *_player;
    union {
        struct {
            unsigned int _maximumPoints:16;
            unsigned int _hidden:1;
            unsigned int _replayable:1;
            unsigned int _reserved:14;
        } ;
        unsigned int _value;
    } _attributes;
    NSDate *_lastReportedDate;
    double _percentComplete;
}

@property (nonatomic) unsigned int attributes;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *achievedDescription;
@property (retain, nonatomic) NSString *unachievedDescription;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic) unsigned short maximumPoints;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isReplayable) _Bool replayable;
@property (retain, nonatomic) NSDate *lastReportedDate;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) GKPlayerInternal *player;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)mergePropertiesFromDescription:(id)arg1;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;

@end
