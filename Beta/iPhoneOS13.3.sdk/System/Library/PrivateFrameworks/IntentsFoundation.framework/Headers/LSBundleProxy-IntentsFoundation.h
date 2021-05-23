/*
 Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
 */

#import <CoreServices/LSBundleProxy.h>

@class LSApplicationProxy;

@interface LSBundleProxy (IntentsFoundation)

@property (readonly) _Bool _inf_isSystem;
@property (readonly) _Bool if_isSystem;
@property (readonly) _Bool if_isAppExtension;
@property (readonly) _Bool if_isWatchKitAppExtension;
@property (readonly) LSApplicationProxy *if_containingAppProxy;

@end
