/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@interface WebBackgroundTaskController : NSObject

{
    unsigned long long _invalidBackgroundTaskIdentifier;
    CDUnknownBlockType _backgroundTaskStartBlock;
    CDUnknownBlockType _backgroundTaskEndBlock;
}

@property (nonatomic) unsigned long long invalidBackgroundTaskIdentifier;
@property (copy, nonatomic) CDUnknownBlockType backgroundTaskStartBlock;
@property (copy, nonatomic) CDUnknownBlockType backgroundTaskEndBlock;

+ (id)sharedController;

- (void)dealloc;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1;

@end
