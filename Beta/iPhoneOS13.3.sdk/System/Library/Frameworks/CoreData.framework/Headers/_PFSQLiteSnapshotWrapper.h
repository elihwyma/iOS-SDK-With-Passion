/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFSQLiteSnapshotWrapper : NSObject

{
    struct sqlite3_snapshot *_s;
    int _externalReferences;
    int _flags;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) const void *bytes;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (long long)compare:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithSnapshot:(struct sqlite3_snapshot *)arg1;
- (int)externalReferenceCount;
- (int)incrementExternalReferenceCount;
- (int)decrementExternalReferenceCount;

@end
