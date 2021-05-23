/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXLinkTapEvent.h>

@class NSString;

@interface SXWebContentLinkTapEvent : SXLinkTapEvent

{
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)initWithIdentifier:(id)arg1 destinationURL:(id)arg2;

@end
