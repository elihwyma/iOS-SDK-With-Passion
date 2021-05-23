/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotificationAlert : PBCodable

{
    NSString *_actionLocKey;
    NSString *_category;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_subtitle;
    NSMutableArray *_subtitleLocalizedArguments;
    NSString *_subtitleLocalizedKey;
    NSString *_text;
    NSString *_title;
    NSMutableArray *_titleLocalizedArguments;
    NSString *_titleLocalizedKey;
}

@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic, readonly) _Bool hasLocalizedKey;
@property (retain, nonatomic) NSString *localizedKey;
@property (retain, nonatomic) NSMutableArray *localizedArguments;
@property (nonatomic, readonly) _Bool hasActionLocKey;
@property (retain, nonatomic) NSString *actionLocKey;
@property (nonatomic, readonly) _Bool hasLaunchImage;
@property (retain, nonatomic) NSString *launchImage;
@property (nonatomic, readonly) _Bool hasSoundName;
@property (retain, nonatomic) NSString *soundName;
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

+ (Class)localizedArgumentsType;
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
- (void)addLocalizedArguments:(id)arg1;
- (void)addTitleLocalizedArguments:(id)arg1;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (unsigned long long)localizedArgumentsCount;
- (void)clearLocalizedArguments;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)clearTitleLocalizedArguments;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)clearSubtitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;

@end
