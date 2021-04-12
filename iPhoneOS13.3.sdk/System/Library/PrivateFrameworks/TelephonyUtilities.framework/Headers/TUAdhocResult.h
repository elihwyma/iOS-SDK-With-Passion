//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUSearchResult-Protocol.h>

@class CNContact, NSArray, NSString, TUSearchController;

@interface TUAdhocResult : NSObject <TUSearchResult>
{
    TUSearchController *_searchController;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
// - (void).cxx_destruct;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) BOOL mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *isoCountryCode;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactIdentifier;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *callerId;
@property(readonly) NSString *displayName;
- (id)initWithString:(id)arg1;

@end

