/*
 Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

#import <ContactsDonation/Swift-Protocol.h>

@protocol CNDonationAccountLogger, CNDonationAgentLogger, CNDonationAnalyticsLogger, CNDonationExtensionLogger, CNDonationPreferencesLogger, CNDonationToolLogger;

@protocol CNDonationLoggerProvider <Swift>

@property (readonly) id <CNDonationAgentLogger> agentLogger;
@property (readonly) id <CNDonationExtensionLogger> extensionLogger;
@property (readonly) id <CNDonationToolLogger> toolLogger;
@property (readonly) id <CNDonationAccountLogger> accountLogger;
@property (readonly) id <CNDonationPreferencesLogger> preferencesLogger;
@property (readonly) id <CNDonationAnalyticsLogger> analyticsLogger;

@end
