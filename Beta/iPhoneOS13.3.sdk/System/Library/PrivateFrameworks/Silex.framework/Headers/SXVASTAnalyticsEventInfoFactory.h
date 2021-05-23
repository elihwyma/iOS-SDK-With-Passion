/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVisibilityMonitoring, SVVolumeProviding;

@interface SXVASTAnalyticsEventInfoFactory : NSObject

{
    id <SVVisibilityMonitoring> _visibilityMonitor;
    id <SVVolumeProviding> _volumeProvider;
}

@property (nonatomic, readonly) id <SVVisibilityMonitoring> visibilityMonitor;
@property (nonatomic, readonly) id <SVVolumeProviding> volumeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createAnalyticsEventInfo;
- (id)createAnalyticsEventInfoWithMetadata:(id)arg1;
- (id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;
- (id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2;

@end
