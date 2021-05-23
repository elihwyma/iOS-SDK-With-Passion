/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <CoreServices/LSResourceProxy.h>

@interface LSResourceProxy (IconServicesAdditions)

+ (_Bool)__IS_canProvideResourceLocator;

- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)__IS_iconResourceLocator;
- (id)cheapDescription;

@end
