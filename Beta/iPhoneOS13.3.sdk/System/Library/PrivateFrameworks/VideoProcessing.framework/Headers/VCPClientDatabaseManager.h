/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPClientDatabaseManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}

+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;
+ (id)sharedDatabaseManager;

- (id)init;
- (id)sharedDatabaseForPhotoLibrary:(id)arg1;

@end
