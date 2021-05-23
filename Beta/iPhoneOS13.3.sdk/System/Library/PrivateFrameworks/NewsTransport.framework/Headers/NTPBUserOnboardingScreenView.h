/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable

{
    int _channelPickerPresentationReason;
    int _countOfNotificationsSelected;
    int _onboardingScreenType;
    int _previouslyCompletedOnboardingOsVersion;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    int _userAction;
    NSString *_userActivityType;
    _Bool _fromPersonalizeNews;
    struct {
        unsigned int channelPickerPresentationReason:1;
        unsigned int countOfNotificationsSelected:1;
        unsigned int onboardingScreenType:1;
        unsigned int previouslyCompletedOnboardingOsVersion:1;
        unsigned int userAction:1;
        unsigned int fromPersonalizeNews:1;
    } _has;
}

@property (nonatomic) _Bool hasOnboardingScreenType;
@property (nonatomic) int onboardingScreenType;
@property (nonatomic, readonly) _Bool hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (nonatomic, readonly) _Bool hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (nonatomic, readonly) _Bool hasUserActivityType;
@property (retain, nonatomic) NSString *userActivityType;
@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasCountOfNotificationsSelected;
@property (nonatomic) int countOfNotificationsSelected;
@property (nonatomic) _Bool hasPreviouslyCompletedOnboardingOsVersion;
@property (nonatomic) int previouslyCompletedOnboardingOsVersion;
@property (nonatomic) _Bool hasFromPersonalizeNews;
@property (nonatomic) _Bool fromPersonalizeNews;
@property (nonatomic) _Bool hasChannelPickerPresentationReason;
@property (nonatomic) int channelPickerPresentationReason;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)channelPickerPresentationReasonAsString:(int)arg1;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;

@end
