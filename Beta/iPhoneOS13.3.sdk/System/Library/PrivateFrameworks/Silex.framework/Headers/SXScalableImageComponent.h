/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString, SXFormattedText;

@interface SXScalableImageComponent : SXComponent

@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) _Bool userControllable;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) SXFormattedText *captionComponent;

+ (id)typeString;

- (unsigned long long)traits;

@end
