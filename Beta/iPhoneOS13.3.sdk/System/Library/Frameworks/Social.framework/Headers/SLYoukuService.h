/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLService.h>

__attribute__((visibility("hidden")))
@interface SLYoukuService : SLService

- (id)serviceType;
- (id)accountTypeIdentifier;
- (long long)authenticationStyle;
- (_Bool)isFirstClassService;

@end
