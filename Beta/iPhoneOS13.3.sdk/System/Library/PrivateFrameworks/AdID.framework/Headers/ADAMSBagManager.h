/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/ADSingleton.h>

@class NSString;

@interface ADAMSBagManager : ADSingleton

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (_Bool)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (_Bool)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (_Bool)authenticateAccountThroughAMSOperation:(id)arg1;

@end
