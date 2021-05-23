/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSAttributedString, NSString;

@interface SXImageComponent : SXComponent

@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) _Bool userControllable;
@property (nonatomic, readonly) _Bool shouldBeExposedToAssistiveTechnology;
@property (nonatomic, readonly) NSAttributedString *captionWithLocalizedRoleForSpeaking;

+ (id)typeString;

- (unsigned long long)traits;

@end
