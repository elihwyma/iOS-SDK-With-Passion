/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDURLSessionPool : NSObject

{
    int _backgroundSessionConnectionPoolLimit;
}

@property (nonatomic, readonly) int backgroundSessionConnectionPoolLimit;

+ (id)sharedURLSessionPool;
+ (id)backgroundSessionConnectionPoolName;

- (id)init;
- (void)_updateBackgroundSessionConnectionPoolLimit;

@end
