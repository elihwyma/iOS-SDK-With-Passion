/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLService.h>

__attribute__((visibility("hidden")))
@interface SLTudouService : SLService

- (id)serviceType;
- (id)accountTypeIdentifier;
- (long long)authenticationStyle;
- (_Bool)isFirstClassService;

@end
