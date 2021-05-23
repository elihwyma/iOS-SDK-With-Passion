/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class NSString;

@interface SXEmbedComponent : SXComponent

@property (nonatomic, readonly) NSString *embedType;
@property (nonatomic, readonly) NSString *resourceIdentifier;

- (unsigned long long)traits;

@end
