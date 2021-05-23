/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOMapServiceTraits, GEORPFeedbackRequest, GEORPFeedbackRequestParameters, GEORPUserCredentials, NSData, NSString;

@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEORPFeedbackTicket : GEOAbstractTicket

{
    NSData *_resubmissionData;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    id <GEOMapItem> _place;
    GEORPFeedbackRequest *_feedbackRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    _Bool _started;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (CDStruct_d1a7ebee)dataRequestKind;
- (id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;

@end
