/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject

{
    NSMapTable *_identifierTypeToIdentifier;
    unsigned long long _itemType;
}

@property (nonatomic, readonly) unsigned long long identifierCount;
@property (nonatomic, readonly) unsigned long long itemType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)identifierForIdentifierType:(unsigned long long)arg1;
- (id)initWithItemType:(unsigned long long)arg1;
- (void)enumerateIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2;

@end
