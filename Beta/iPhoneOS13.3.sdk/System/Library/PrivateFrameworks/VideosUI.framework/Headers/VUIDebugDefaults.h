/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@interface VUIDebugDefaults : NSObject

{
    _Bool _debugUIEnabled;
    _Bool _metricsLoggingEnabled;
    _Bool _metricsExpandedLoggingEnabled;
    _Bool _enableDemoMode;
}

@property (nonatomic) _Bool debugUIEnabled;
@property (nonatomic) _Bool metricsLoggingEnabled;
@property (nonatomic) _Bool metricsExpandedLoggingEnabled;
@property (nonatomic) _Bool enableDemoMode;

+ (id)sharedInstance;

- (id)init;

@end
