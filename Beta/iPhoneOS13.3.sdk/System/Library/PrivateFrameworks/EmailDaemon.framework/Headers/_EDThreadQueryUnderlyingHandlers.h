/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDInMemoryThreadQueryHandler, EDPrecomputedThreadQueryHandler, EDThreadMigrator, EMObjectID;

@interface _EDThreadQueryUnderlyingHandlers : NSObject

{
    EMObjectID *_inMemoryObservationID;
    EMObjectID *_precomputedObservationID;
    EDInMemoryThreadQueryHandler *_inMemoryQueryHandler;
    EDPrecomputedThreadQueryHandler *_precomputedQueryHandler;
    EDThreadMigrator *_threadMigrator;
}

@property (retain, nonatomic) EMObjectID *inMemoryObservationID;
@property (retain, nonatomic) EMObjectID *precomputedObservationID;
@property (retain, nonatomic) EDInMemoryThreadQueryHandler *inMemoryQueryHandler;
@property (retain, nonatomic) EDPrecomputedThreadQueryHandler *precomputedQueryHandler;
@property (retain, nonatomic) EDThreadMigrator *threadMigrator;

- (_Bool)_isCurrentObservationToken:(id)arg1;

@end
