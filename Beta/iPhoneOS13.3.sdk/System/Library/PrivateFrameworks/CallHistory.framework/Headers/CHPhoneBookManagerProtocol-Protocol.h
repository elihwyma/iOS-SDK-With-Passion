/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/Swift-Protocol.h>

@protocol CHPhoneBookManagerProtocol <Swift>

+ (unsigned short)get;

- (unsigned short)getRecordId:countryCode:isEmail: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFullCNContactForContactIdentifier:isEmail: /* Error: Ran out of types for this method. */;
- (unsigned short)getPersonsNameForContact: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocalizedCallerIdLabelForContact:forCallerId:withCallerIdIsEmail: /* Error: Ran out of types for this method. */;
- (unsigned short)isABContactASuggestion;

@end
