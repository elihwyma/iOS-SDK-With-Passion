/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString, NSURL;

@interface SXEmbedVideoComponent : SXComponent

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *accessibilityCaption;

+ (id)typeString;

- (unsigned long long)traits;

@end
