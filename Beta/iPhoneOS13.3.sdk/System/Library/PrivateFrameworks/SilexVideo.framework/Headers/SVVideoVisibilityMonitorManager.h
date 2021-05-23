/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVWeakObjectCache;

@protocol SVVisibilityMonitorFactory;

@interface SVVideoVisibilityMonitorManager : NSObject

{
    id <SVVisibilityMonitorFactory> _videoVisibilityMonitorFactory;
    SVWeakObjectCache *_visibilityMonitors;
}

@property (nonatomic, readonly) id <SVVisibilityMonitorFactory> videoVisibilityMonitorFactory;
@property (nonatomic, readonly) SVWeakObjectCache *visibilityMonitors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)visibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisibilityMonitorFactory:(id)arg1;

@end
