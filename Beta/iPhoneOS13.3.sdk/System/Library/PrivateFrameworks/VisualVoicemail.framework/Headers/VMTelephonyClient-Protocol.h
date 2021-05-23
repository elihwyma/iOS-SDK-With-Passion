/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/Swift-Protocol.h>

@class NSArray;

@protocol VMTelephonyClient <Swift>

@property (copy, nonatomic, readonly) NSArray *subscriptions;

- (unsigned short)abbreviatedLabelForSubscription: /* Error: Ran out of types for this method. */;
- (unsigned short)isoCountryCodeForSubscription: /* Error: Ran out of types for this method. */;

@end
