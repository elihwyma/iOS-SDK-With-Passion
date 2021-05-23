/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@interface DOCAggdReporter : NSObject

{
    unsigned long long _recentsViewStartTime;
}

+ (_Bool)enabled;
+ (id)sharedReporter;

- (void)startToMeasureTimeToLoad:(unsigned long long)arg1;
- (void)stopToMeasureTimeToLoad:(unsigned long long)arg1;

@end
