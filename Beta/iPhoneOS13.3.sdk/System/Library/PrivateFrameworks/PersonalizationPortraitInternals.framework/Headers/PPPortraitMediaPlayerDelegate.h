/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, MPRequestResponseController, NSDate, NSString, PPNamedEntityStore;

@protocol OS_dispatch_queue;

@interface PPPortraitMediaPlayerDelegate : NSObject

{
    PPNamedEntityStore *_namedEntityStore;
    double _donationDelaySeconds;
    _Bool _useSGNamedEntityDissector;
    MPRequestResponseController *_requestController;
    MPCPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bundleIdOfCurrentForegroundApp;
+ (_Bool)_response:(id)arg1 isEqualTo:(id)arg2;
+ (id)_setupRequest;

- (id)init;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)processResponse:(id)arg1;
- (id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(_Bool)arg3 useSGNamedEntityDissector:(_Bool)arg4;
- (void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3;
- (void)waitForQueueEmpty;

@end
