/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface _DKObjectMOConverter : NSObject

{
    _Bool _readMetadata;
    _Bool _deduplicateValues;
    NSCache *_cache;
}

@property (retain) NSCache *cache;
@property _Bool readMetadata;
@property _Bool deduplicateValues;

- (id)init;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;
- (_Bool)copyObject:(id)arg1 intoManagedObject:(id)arg2;
- (id)dataIntervalsFromManagedObjects:(id)arg1;

@end
