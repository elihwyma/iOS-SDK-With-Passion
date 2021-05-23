/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface WBSSiteMetadataResponse : NSObject

{
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *url;

+ (id)responseWithURL:(id)arg1;

- (id)init;
- (id)initWithURL:(id)arg1;

@end
