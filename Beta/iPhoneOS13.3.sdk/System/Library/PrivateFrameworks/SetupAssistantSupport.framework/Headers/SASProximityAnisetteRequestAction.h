/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class AKAnisetteData, NSData, NSString;

@interface SASProximityAnisetteRequestAction : SASProximityAction

{
    _Bool _shouldProvision;
    _Bool _success;
    long long _request;
    NSData *_sim;
    NSString *_dsid;
    AKAnisetteData *_anisetteData;
}

@property long long request;
@property (retain) NSData *sim;
@property _Bool shouldProvision;
@property (retain) NSString *dsid;
@property (retain) AKAnisetteData *anisetteData;
@property _Bool success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)arg1;

- (_Bool)hasResponse;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)arg1;

@end
