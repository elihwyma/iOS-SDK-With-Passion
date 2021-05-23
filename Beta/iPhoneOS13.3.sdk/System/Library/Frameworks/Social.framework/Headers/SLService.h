/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLService : NSObject

+ (id)serviceForServiceType:(id)arg1;
+ (id)allServices;

- (id)serviceType;
- (id)accountType;
- (id)activityTitle;
- (id)activityImage;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (_Bool)hasAccounts;
- (_Bool)isFirstClassService;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (_Bool)supportsImageURL:(id)arg1;
- (_Bool)supportsVideoURL:(id)arg1;
- (id)composeViewController;

@end
