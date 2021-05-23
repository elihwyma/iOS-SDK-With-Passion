/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@interface RPStoreManager : NSObject

+ (id)sharedManager;

- (void)loadItemDetailsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
