/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNFuture, CNUIIDSAvailabilityProvider, FMFSession, NSSet, NSString;

@protocol CNCancelable, CNSchedulerProvider, CNShareLocationProtocol;

__attribute__((visibility("hidden")))
@interface CNShareLocationController : NSObject

{
    CNContact *_contact;
    NSObject<CNShareLocationProtocol> *_shareLocationDelegate;
    FMFSession *_fmfSession;
    NSSet *_handles;
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
    id <CNCancelable> _bestPropertyCancelable;
    CNFuture *_bestPropertyFuture;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (retain, nonatomic) FMFSession *fmfSession;
@property (retain, nonatomic) NSSet *handles;
@property (nonatomic, readonly) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (retain, nonatomic) id <CNCancelable> bestPropertyCancelable;
@property (retain, nonatomic) CNFuture *bestPropertyFuture;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) _Bool canShare;
@property (nonatomic, readonly) _Bool isSharing;
@property (weak, nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fmfHandleFromContactProperty:(id)arg1;
+ (id)fmfHandlesFromContact:(id)arg1;

- (void)perform:(id)arg1;
- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)initWithIDSAvailabilityProvider:(id)arg1 fmfSession:(id)arg2 schedulerProvider:(id)arg3;
- (void)shareLocationUntilEndDate:(id)arg1;
- (void)stopSharingLocation;
- (id)endOfDayDate;
- (void)initiateIDSRequest;
- (id)callerID:(id *)arg1;
- (id)callerIDFuture;
- (void)notifySharingStatusDidChange;

@end
