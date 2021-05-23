/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUURLHandling;

@interface NURouter : NSObject

{
    id <NUURLHandling> _urlHandler;
}

@property (nonatomic, readonly) id <NUURLHandling> urlHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)routeToNewsAppForYouFeed;
- (id)initWithURLHandler:(id)arg1;

@end
