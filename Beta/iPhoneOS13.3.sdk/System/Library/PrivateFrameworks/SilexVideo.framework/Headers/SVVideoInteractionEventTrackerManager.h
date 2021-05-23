/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@class NSString;

@protocol SVVideoEventTrackerProviding;

@interface SVVideoInteractionEventTrackerManager : NSObject <Swift>

{
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
}

@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithVideoEventTrackerProvider:(id)arg1;
- (id)createInteractionHandlerForVideo:(id)arg1;

@end
