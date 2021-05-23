/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXNotificationsPBContext, ATXNotificationsPBGrade, NSString;

@interface ATXNotificationsPBGradedRecord : PBCodable

{
    NSString *_bundleId;
    ATXNotificationsPBContext *_context;
    ATXNotificationsPBGrade *_grade;
    NSString *_message;
    NSString *_subtitle;
    int _suppActions;
    int _timezone;
    NSString *_title;
    NSString *_topic;
    NSString *_userid;
    CDStruct_65e6390a _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) _Bool hasMessage;
@property (retain, nonatomic) NSString *message;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) ATXNotificationsPBContext *context;
@property (nonatomic) _Bool hasSuppActions;
@property (nonatomic) int suppActions;
@property (nonatomic) _Bool hasTimezone;
@property (nonatomic) int timezone;
@property (nonatomic, readonly) _Bool hasGrade;
@property (retain, nonatomic) ATXNotificationsPBGrade *grade;
@property (nonatomic, readonly) _Bool hasUserid;
@property (retain, nonatomic) NSString *userid;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
