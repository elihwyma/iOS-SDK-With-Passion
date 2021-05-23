/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoEventTrackerProviding;

@interface SVSkipInteractionObserverFactory : NSObject

{
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
}

@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInteractionObserverForVideo:(id)arg1;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

@end
