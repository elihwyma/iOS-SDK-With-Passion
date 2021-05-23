/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLEntity_DerivedAttributesExtension : NSObject

{
    NSSQLEntity *_entity;
    struct __CFDictionary *_derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}

- (void)dealloc;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (id)migrationSQL;
- (void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2;
- (id)derivedAttributes;
- (id)triggerSQL;
- (void)_generateTriggerSQL;

@end
