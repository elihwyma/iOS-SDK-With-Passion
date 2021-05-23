/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <Swift>

{
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPLQueryChangeDetectionCriteria:(id)arg1;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(CDUnknownBlockType)arg1;

@end
