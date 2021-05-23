/*
 Image: /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/CoreDuetDebugLogging
 */

#import <Foundation/NSObject.h>

@interface CDDebug : NSObject

{
    _Bool verboseMode;
}

- (id)init;
- (void)log:(const char *)arg1;
- (void)error:(long long)arg1;
- (id)initWithVerboseMode:(_Bool)arg1;

@end
