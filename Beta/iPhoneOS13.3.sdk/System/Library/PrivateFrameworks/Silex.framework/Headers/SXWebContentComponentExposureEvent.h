/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent

{
    NSString *_componentIdentifier;
    NSURL *_URL;
    NSString *_exposureIdentifier;
}

@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *exposureIdentifier;

- (id)initWithComponent:(id)arg1;

@end
