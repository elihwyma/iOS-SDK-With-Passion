/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <CFNetwork/NSURLProtectionSpace.h>

@class NSArray, NSString;

@interface NSURLProtectionSpace (SafariServicesExtras)

@property (copy, nonatomic, readonly) NSString *_sf_highLevelDomainAndPort;
@property (nonatomic, readonly) NSArray *_sf_identities;
@property (nonatomic, readonly) _Bool _sf_canAuthenticate;

@end
