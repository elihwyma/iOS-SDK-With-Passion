/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface PGLogging : NSObject

{
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;

@end
