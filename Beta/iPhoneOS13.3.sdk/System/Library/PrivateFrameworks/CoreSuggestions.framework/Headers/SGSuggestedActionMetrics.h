/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGMContactConfirmed, SGMContactDetailConfirmed, SGMContactDetailConversationTurn, SGMContactDetailRejected, SGMContactDetailUsed, SGMContactInBanner, SGMContactRejected, SGMEventBannerConfirmed, SGMEventBannerRejected, SGMEventInBanner, SGMMaybeInformationShown, SGMUnknownContactInformationShown;

@interface SGSuggestedActionMetrics : NSObject

{
    SGMContactInBanner *_contactInBanner;
    SGMContactConfirmed *_contactConfirmed;
    SGMContactRejected *_contactRejected;
    SGMContactDetailConfirmed *_contactDetailConfirmed;
    SGMContactDetailRejected *_contactDetailRejected;
    SGMContactDetailUsed *_contactDetailUsed;
    SGMEventInBanner *_eventInBanner;
    SGMEventBannerConfirmed *_eventBannerConfirmed;
    SGMEventBannerRejected *_eventBannerRejected;
    SGMMaybeInformationShown *_maybeInformationShown;
    SGMUnknownContactInformationShown *_unknownContactInformationShown;
    SGMContactDetailConversationTurn *_contactDetailConversationTurn;
}

@property (retain, nonatomic) SGMContactInBanner *contactInBanner;
@property (retain, nonatomic) SGMContactConfirmed *contactConfirmed;
@property (retain, nonatomic) SGMContactRejected *contactRejected;
@property (retain, nonatomic) SGMContactDetailConfirmed *contactDetailConfirmed;
@property (retain, nonatomic) SGMContactDetailRejected *contactDetailRejected;
@property (retain, nonatomic) SGMContactDetailUsed *contactDetailUsed;
@property (retain, nonatomic) SGMEventInBanner *eventInBanner;
@property (retain, nonatomic) SGMEventBannerConfirmed *eventBannerConfirmed;
@property (retain, nonatomic) SGMEventBannerRejected *eventBannerRejected;
@property (retain, nonatomic) SGMMaybeInformationShown *maybeInformationShown;
@property (retain, nonatomic) SGMUnknownContactInformationShown *unknownContactInformationShown;
@property (retain, nonatomic) SGMContactDetailConversationTurn *contactDetailConversationTurn;

+ (id)instance;
+ (void)recordContactDetailUsage:(id)arg1 withApp:(id)arg2;
+ (void)recordMaybeContactFrom:(unsigned long long)arg1 withVersion:(id)arg2;
+ (void)recordBannerShownWithContacts:(id)arg1 events:(id)arg2 inApp:(struct SGMBannerDisplayApp_)arg3;
+ (void)recordBannerConfirmedWithContact:(id)arg1 proposedCNContact:(id)arg2 confirmedCNContact:(id)arg3 inApp:(struct SGMBannerDisplayApp_)arg4;
+ (void)recordBannerRejectedWithContact:(id)arg1 inApp:(struct SGMBannerDisplayApp_)arg2;
+ (void)recordBannerConfirmedWithEvent:(id)arg1 proposedEKEvent:(id)arg2 confirmedEKEvent:(id)arg3 inApp:(struct SGMBannerDisplayApp_)arg4;
+ (void)recordBannerRejectedWithEvent:(id)arg1 inApp:(struct SGMBannerDisplayApp_)arg2;
+ (void)recordContactDetailEngagementWithResolution:(long long)arg1 detailType:(struct SGMContactDetailType_)arg2 extractionType:(unsigned long long)arg3 modelVersion:(id)arg4;
+ (void)recordConversationTurnWithContact:(id)arg1 received:(_Bool)arg2 curated:(_Bool)arg3 throughApp:(id)arg4 withDetailName:(id)arg5 withDetailExtraction:(id)arg6;

- (id)init;

@end
