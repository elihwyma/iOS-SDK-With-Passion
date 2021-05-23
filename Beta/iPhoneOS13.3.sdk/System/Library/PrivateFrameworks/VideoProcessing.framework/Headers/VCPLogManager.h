/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPLogManager : NSObject

{
    int _logLevel;
}

@property (readonly) int logLevel;

+ (id)dateFormatter;
+ (id)sharedLogManager;

- (id)init;

@end
