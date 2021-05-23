/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSURLSessionConfiguration.h>

@interface NSURLSessionConfiguration (AppleMediaServices)

+ (id)ams_configurationWithProcessInfo:(id)arg1 bag:(id)arg2;
+ (id)_URLBagCache;
+ (_Bool)_allowsAMSURLCache;

- (void)ams_configureWithProcessInfo:(id)arg1 bag:(id)arg2;

@end
