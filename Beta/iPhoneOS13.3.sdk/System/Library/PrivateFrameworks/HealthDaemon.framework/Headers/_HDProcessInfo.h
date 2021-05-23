/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HDProcessInfo : NSObject

{
    unsigned int _applicationState;
    int _pid;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned int applicationState;
@property (nonatomic, readonly) int pid;

+ (id)processInfoWithDictionary:(id)arg1;

@end
