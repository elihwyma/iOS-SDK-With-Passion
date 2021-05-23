/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIScopedBackgroundTask : NSObject

{
    unsigned long long _taskIdentifier;
}

@property (nonatomic) unsigned long long taskIdentifier;

- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

@end
