/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CHRecentCall, CNContact, NSArray, NSString, TUSearchController;

@interface TUProxyRecentCall : NSObject

{
    CHRecentCall *_recentCall;
    TUSearchController *_searchController;
}

@property (retain, nonatomic) CHRecentCall *recentCall;
@property (readonly) NSString *mostRecentCallInfo;
@property (weak) TUSearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *displayName;
@property (readonly) NSString *callerId;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSArray *handles;
@property (readonly) long long mostRecentCallType;
@property (readonly) _Bool mostRecentCallWasMissed;
@property (readonly) NSArray *idsCanonicalDestinations;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithRecentCall:(id)arg1;

@end
