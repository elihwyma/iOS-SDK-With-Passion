/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLService.h>

__attribute__((visibility("hidden")))
@interface SLFlickrService : SLService

- (id)serviceType;
- (id)activityTitle;
- (id)activityImage;
- (id)accountTypeIdentifier;
- (long long)authenticationStyle;
- (_Bool)isFirstClassService;

@end
