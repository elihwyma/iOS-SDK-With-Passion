/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOMapServiceTraits, GEORPProblem, GEORPProblemRequest, GEORPUserCredentials, NSData, NSString;

@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEORPSubmissionTicket : GEOAbstractTicket

{
    NSData *_resubmissionData;
    GEORPProblem *_problem;
    id <GEOMapItem> _place;
    GEORPProblemRequest *_problemRequest;
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
- (id)initWithResubmissionData:(id)arg1 traits:(id)arg2;
- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;

@end
