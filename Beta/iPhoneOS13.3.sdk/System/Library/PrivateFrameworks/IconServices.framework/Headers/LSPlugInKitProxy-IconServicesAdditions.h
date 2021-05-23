/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <CoreServices/LSPlugInKitProxy.h>

@interface LSPlugInKitProxy (IconServicesAdditions)

@property (readonly) _Bool __IS_canProvideIcon;
@property (readonly) _Bool __IS_isWatchApp;
@property (readonly) _Bool __IS_isMessagesApp;

- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;

@end
