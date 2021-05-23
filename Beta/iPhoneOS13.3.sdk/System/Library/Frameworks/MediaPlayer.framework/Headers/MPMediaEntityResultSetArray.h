/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaArray.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaLibrary, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSMutableArray, NSObject;

@protocol MPMediaLibraryResultSet, OS_dispatch_queue;

@interface MPMediaEntityResultSetArray : MPMediaArray <Swift>

{
    id <MPMediaLibraryResultSet> _resultSet;
    Class _entityClass;
    MPMediaLibrary *_library;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
    long long _revision;
}

@property (nonatomic, readonly) id <MPMediaLibraryResultSet> resultSet;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;
- (_Bool)isQueryResultSetInvalidated;
- (id)sectionInfo;

@end
