/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLRelationshipOrderingState : NSObject

{
    id _oids;
    id _foks;
    _Bool _isMutable;
}

- (id)description;
- (id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2;
- (unsigned long long)indexForObjectID:(id)arg1;
- (_Bool)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)orderKeys;
- (id)objectIDs;
- (unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id *)arg3;

@end
