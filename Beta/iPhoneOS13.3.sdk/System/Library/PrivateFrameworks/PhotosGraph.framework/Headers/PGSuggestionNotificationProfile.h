/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSSet;

@protocol OS_os_log;

@interface PGSuggestionNotificationProfile : NSObject

{
    NSArray *_existingSuggestions;
    _Bool _eligibleForNotification;
    unsigned char _userType;
    NSSet *_shareParticipantContactIdentifiers;
    NSDate *_dateOfLastNotification;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (nonatomic, readonly) _Bool eligibleForNotification;
@property (nonatomic, readonly) unsigned char userType;
@property (nonatomic, readonly) NSDate *dateOfLastNotification;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1;
+ (unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1;

- (id)initWithExistingSuggestions:(id)arg1;
- (id)shareParticipantContactIdentifiers;
- (_Bool)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2;
- (void)_determineUserTypeAndEligibility;
- (unsigned char)notificationQualityForHighlightNode:(id)arg1;
- (unsigned char)notificationQualityForEnrichableEvent:(id)arg1;

@end
