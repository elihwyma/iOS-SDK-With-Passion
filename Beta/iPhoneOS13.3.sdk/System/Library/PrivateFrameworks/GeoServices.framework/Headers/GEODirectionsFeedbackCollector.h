/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray;

@interface GEODirectionsFeedbackCollector : NSObject

{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackLogMessage *_currentFeedbackLogMessage;
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
    double _originalExpectedTime;
    _Bool _hasEnteredPreArrivalMode;
}

@property (retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage;
@property (retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;

- (void)dealloc;
- (id)description;
- (void)reset;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)setOriginalExpectedTime:(double)arg1;
- (void)addGuidanceEventFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (void)setFinalLocation:(id)arg1 asArrival:(_Bool)arg2;
- (void)setHasEnteredPreArrivalMode:(_Bool)arg1;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg1;
- (void)setModalities:(id)arg1;
- (void)changeNavigationType:(int)arg1;
- (void)endFeedbackSessionWithTracePath:(id)arg1;

@end
