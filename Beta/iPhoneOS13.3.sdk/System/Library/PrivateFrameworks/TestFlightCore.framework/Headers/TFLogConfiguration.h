/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface TFLogConfiguration : NSObject

{
    NSString *_subsystem;
    NSString *_category;
    NSObject<OS_os_log> *_internalLogger;
    NSObject<OS_dispatch_queue> *_internalLoggerAccessQueue;
}

@property (copy, nonatomic, readonly) NSString *subsystem;
@property (copy, nonatomic, readonly) NSString *category;
@property (retain, nonatomic) NSObject<OS_os_log> *internalLogger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalLoggerAccessQueue;
@property (nonatomic, readonly) NSObject<OS_os_log> *generatedLogger;

+ (id)defaultConfiguration;

- (id)initWithSubsystem:(id)arg1 category:(id)arg2;

@end
