/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@protocol HFApplicationURLHandling;

@interface HFOpenURLRouter : NSObject

{
    id <HFApplicationURLHandling> _applicationURLHandler;
}

@property (weak, nonatomic) id <HFApplicationURLHandling> applicationURLHandler;

+ (id)sharedInstance;

- (id)openURL:(id)arg1;

@end
