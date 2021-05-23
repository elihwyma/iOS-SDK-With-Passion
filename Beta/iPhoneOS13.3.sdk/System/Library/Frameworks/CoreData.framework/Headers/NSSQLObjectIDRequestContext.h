/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext

{
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

@property (nonatomic, readonly) NSDictionary *entitiesAndCounts;
@property (nonatomic, readonly) NSSQLModel *model;

- (void)dealloc;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
