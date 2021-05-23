/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable

{
    int _badgeCount;
    NSString *_category;
    NSString *_dialog;
    NSData *_payload;
    NSString *_sound;
    int _source;
    NSString *_subtitle;
    NSMutableArray *_subtitleLocalizedArguments;
    NSString *_subtitleLocalizedKey;
    NSString *_title;
    NSMutableArray *_titleLocalizedArguments;
    NSString *_titleLocalizedKey;
    NSString *_uuid;
    _Bool _isRead;
    struct {
        unsigned int badgeCount:1;
        unsigned int source:1;
        unsigned int isRead:1;
    } _has;
}

@property (nonatomic) _Bool hasIsRead;
@property (nonatomic) _Bool isRead;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic, readonly) _Bool hasDialog;
@property (retain, nonatomic) NSString *dialog;
@property (nonatomic, readonly) _Bool hasSound;
@property (retain, nonatomic) NSString *sound;
@property (nonatomic) _Bool hasBadgeCount;
@property (nonatomic) int badgeCount;
@property (nonatomic, readonly) _Bool hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitleLocalizedKey;
@property (retain, nonatomic) NSString *titleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) _Bool hasSubtitleLocalizedKey;
@property (retain, nonatomic) NSString *subtitleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments;

+ (Class)titleLocalizedArgumentsType;
+ (Class)subtitleLocalizedArgumentsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;
- (void)addTitleLocalizedArguments:(id)arg1;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)clearTitleLocalizedArguments;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)clearSubtitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;

@end
