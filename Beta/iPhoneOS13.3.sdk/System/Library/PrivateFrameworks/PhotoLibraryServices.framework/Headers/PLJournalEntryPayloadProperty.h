/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface PLJournalEntryPayloadProperty : NSObject

{
    _Bool _requiresConversion;
    _Bool _isUUIDKey;
    _Bool _isToManySubRelationship;
    NSString *_key;
    unsigned long long _type;
    NSSet *_relationPropertyNames;
    NSDictionary *_subRelationshipProperties;
    PLJournalEntryPayloadProperty *_parentProperty;
}

@property (weak, nonatomic) PLJournalEntryPayloadProperty *parentProperty;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool requiresConversion;
@property (nonatomic, readonly) _Bool isUUIDKey;
@property (nonatomic, readonly) NSSet *relationPropertyNames;
@property (nonatomic, readonly) NSDictionary *subRelationshipProperties;
@property (nonatomic, readonly) _Bool isToManySubRelationship;
@property (nonatomic, readonly) _Bool isPropertyListSupportedType;

+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)arg1 relationPropertyNames:(id)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(_Bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(_Bool)arg3;

- (id)description;
- (_Bool)isEqualToKey:(id)arg1;
- (id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(_Bool)arg4 relationPropertyNames:(id)arg5 isUUIDKey:(_Bool)arg6 isToManySubRelationship:(_Bool)arg7;

@end
