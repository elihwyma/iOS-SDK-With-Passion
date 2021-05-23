/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFResolver;

@interface NUVideoViewControllerFactory : NSObject

{
    id <NFResolver> _resolver;
}

@property (nonatomic, readonly) id <NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResolver:(id)arg1;
- (id)createVideoViewControllerWithItems:(id)arg1 visibilityMonitor:(id)arg2 eventTrackerConfiguration:(id)arg3 externalAnalyticsReferrer:(id)arg4 placement:(id)arg5 discoverMoreVideosInfo:(id)arg6 activityViewControllerFactory:(id)arg7;

@end
