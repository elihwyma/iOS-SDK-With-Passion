/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSURL;

@interface SXLinkTapEvent : SXAnalyticsEvent

{
    NSURL *_destinationURL;
}

@property (nonatomic, readonly) NSURL *destinationURL;

- (id)initWithDestinationURL:(id)arg1;

@end
