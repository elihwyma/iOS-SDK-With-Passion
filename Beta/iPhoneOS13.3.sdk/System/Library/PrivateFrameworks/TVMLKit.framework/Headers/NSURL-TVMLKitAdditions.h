/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (TVMLKitAdditions)

- (_Bool)tv_isResourceURL;
- (id)tv_resourceName;
- (_Bool)tv_isAppIconURL;
- (long long)tv_imageURLType;

@end
