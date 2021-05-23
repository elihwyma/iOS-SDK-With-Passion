/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVDiscoverMoreInteractionHandling;

@interface SVDiscoverMoreButtonInteractionHandler : NSObject

{
    id <SVDiscoverMoreInteractionHandling> _discoverMoreInteractionHandler;
}

@property (nonatomic, readonly) id <SVDiscoverMoreInteractionHandling> discoverMoreInteractionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithDiscoverMoreInteractionHandler:(id)arg1;

@end
