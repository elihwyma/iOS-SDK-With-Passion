/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@interface CADObjectID : NSObject

{
    _Bool _temporary;
    int _entityType;
    int _entityID;
}

@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) int entityID;
@property (nonatomic, readonly, getter=isTemporary) _Bool temporary;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)stringRepresentation;
- (id)entityName;
- (id)URIRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2;

@end
