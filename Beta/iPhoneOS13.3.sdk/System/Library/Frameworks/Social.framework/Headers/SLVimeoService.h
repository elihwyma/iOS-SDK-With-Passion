/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLService.h>

__attribute__((visibility("hidden")))
@interface SLVimeoService : SLService

- (id)serviceType;
- (id)activityTitle;
- (id)activityImage;
- (id)accountTypeIdentifier;
- (long long)authenticationStyle;
- (_Bool)isFirstClassService;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;

@end
