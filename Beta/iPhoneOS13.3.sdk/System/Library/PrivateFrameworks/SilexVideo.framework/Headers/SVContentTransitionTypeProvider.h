/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoViewControllerProviding;

@interface SVContentTransitionTypeProvider : NSObject

{
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long contentTransitionType;

- (id)initWithVideoViewControllerProvider:(id)arg1;

@end
