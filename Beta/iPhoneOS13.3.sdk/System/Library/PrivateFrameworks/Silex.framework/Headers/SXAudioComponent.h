/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString;

@interface SXAudioComponent : SXComponent

@property (nonatomic, readonly) NSString *stillImageIdentifier;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *accessibilityCaption;

+ (id)typeString;

- (unsigned long long)traits;

@end
