/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface ATXNotificationsPBSetting : PBCodable

{
    int _alert;
    int _alertStyle;
    int _announcement;
    int _authStatus;
    int _badge;
    NSString *_bundleId;
    int _carPlay;
    int _criticalAlert;
    NSString *_genre;
    int _group;
    int _lockScreen;
    int _notificationCenter;
    int _showPreviews;
    int _sound;
    NSMutableArray *_topics;
    struct {
        unsigned int alert:1;
        unsigned int alertStyle:1;
        unsigned int announcement:1;
        unsigned int authStatus:1;
        unsigned int badge:1;
        unsigned int carPlay:1;
        unsigned int criticalAlert:1;
        unsigned int group:1;
        unsigned int lockScreen:1;
        unsigned int notificationCenter:1;
        unsigned int showPreviews:1;
        unsigned int sound:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasGenre;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) _Bool hasAuthStatus;
@property (nonatomic) int authStatus;
@property (nonatomic) _Bool hasSound;
@property (nonatomic) int sound;
@property (nonatomic) _Bool hasBadge;
@property (nonatomic) int badge;
@property (nonatomic) _Bool hasAlert;
@property (nonatomic) int alert;
@property (nonatomic) _Bool hasNotificationCenter;
@property (nonatomic) int notificationCenter;
@property (nonatomic) _Bool hasLockScreen;
@property (nonatomic) int lockScreen;
@property (nonatomic) _Bool hasCarPlay;
@property (nonatomic) int carPlay;
@property (nonatomic) _Bool hasAlertStyle;
@property (nonatomic) int alertStyle;
@property (nonatomic) _Bool hasShowPreviews;
@property (nonatomic) int showPreviews;
@property (nonatomic) _Bool hasCriticalAlert;
@property (nonatomic) int criticalAlert;
@property (nonatomic) _Bool hasAnnouncement;
@property (nonatomic) int announcement;
@property (nonatomic) _Bool hasGroup;
@property (nonatomic) int group;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)badgeAsString:(int)arg1;
- (int)StringAsBadge:(id)arg1;
- (void)clearTopics;
- (void)addTopics:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (id)authStatusAsString:(int)arg1;
- (int)StringAsAuthStatus:(id)arg1;
- (id)soundAsString:(int)arg1;
- (int)StringAsSound:(id)arg1;
- (id)alertAsString:(int)arg1;
- (int)StringAsAlert:(id)arg1;
- (id)notificationCenterAsString:(int)arg1;
- (int)StringAsNotificationCenter:(id)arg1;
- (id)lockScreenAsString:(int)arg1;
- (int)StringAsLockScreen:(id)arg1;
- (id)carPlayAsString:(int)arg1;
- (int)StringAsCarPlay:(id)arg1;
- (id)alertStyleAsString:(int)arg1;
- (int)StringAsAlertStyle:(id)arg1;
- (id)showPreviewsAsString:(int)arg1;
- (int)StringAsShowPreviews:(id)arg1;
- (id)criticalAlertAsString:(int)arg1;
- (int)StringAsCriticalAlert:(id)arg1;
- (id)announcementAsString:(int)arg1;
- (int)StringAsAnnouncement:(id)arg1;
- (id)groupAsString:(int)arg1;
- (int)StringAsGroup:(id)arg1;

@end
