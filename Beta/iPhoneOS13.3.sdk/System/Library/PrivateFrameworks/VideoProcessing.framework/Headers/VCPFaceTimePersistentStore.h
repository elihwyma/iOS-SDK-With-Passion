/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VCPFaceTimePersistentStore : NSObject

{
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_backgroundContext;
}

+ (id)sharedInstance;

- (id)init;
- (id)fetchAllFaceTimeSessions;
- (_Bool)storeFaceTimeSession:(id)arg1;

@end
