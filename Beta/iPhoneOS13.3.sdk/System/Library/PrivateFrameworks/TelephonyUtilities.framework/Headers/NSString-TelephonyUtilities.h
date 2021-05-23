/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSString.h>

@interface NSString (TelephonyUtilities)

- (_Bool)destinationIdIsEmailAddress;
- (_Bool)destinationIdIsPhoneNumber;
- (id)IDSFormattedDestinationID;
- (id)normalizedDestination;
- (_Bool)destinationIdIsCallControlCode;
- (id)formattedDisplayID;
- (id)LTRString;
- (id)RTLString;

@end
