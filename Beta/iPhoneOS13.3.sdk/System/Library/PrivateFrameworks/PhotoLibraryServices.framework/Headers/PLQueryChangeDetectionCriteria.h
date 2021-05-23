/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject

{
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) _Bool isEmpty;

- (id)init;
- (id)description;
- (void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2;
- (void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2;
- (void)enumerateEntitiesAndAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(CDUnknownBlockType)arg1;

@end
