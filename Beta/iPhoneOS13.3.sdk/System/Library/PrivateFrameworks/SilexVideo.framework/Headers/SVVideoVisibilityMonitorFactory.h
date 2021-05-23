/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoVisiblePercentageManager;

@interface SVVideoVisibilityMonitorFactory : NSObject

{
    id <SVVideoVisiblePercentageManager> _videoVisiblePercentageManager;
}

@property (nonatomic, readonly) id <SVVideoVisiblePercentageManager> videoVisiblePercentageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createVisibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisiblePercentageManager:(id)arg1;

@end
