/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, NSURL;

@protocol INTermsAndConditionsExport <Swift>

@property (nonatomic, readonly) NSString *localizedTermsAndConditionsText;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;
@property (nonatomic, readonly) NSURL *termsAndConditionsURL;

- (unsigned short)init;

@end
