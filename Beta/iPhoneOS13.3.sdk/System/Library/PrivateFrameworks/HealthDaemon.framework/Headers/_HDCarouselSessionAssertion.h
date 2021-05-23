/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class NSString;

@interface _HDCarouselSessionAssertion : HDAssertion

{
    _Bool _supportsAOT;
    NSString *_applicationBundleIdentifier;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic) _Bool supportsAOT;

- (id)initWithOwnerIdentifier:(id)arg1;

@end
