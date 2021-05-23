/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@protocol CADObjectInterface

- (unsigned short)CADObjectExists:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObjectsExist:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getPropertiesWithNames:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getPropertyWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getStringPropertyWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getNumberPropertyWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getDatePropertyWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getDataPropertyWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getRelatedObjectWithRelationName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:getRelatedObjectsWithRelationName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObject:setAttributes:andRelations:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseInsertObjectsWithTempObjectIDs:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseDeleteObjectsWithObjectIDs:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADObjectIsManaged:reply: /* Error: Ran out of types for this method. */;

@end
