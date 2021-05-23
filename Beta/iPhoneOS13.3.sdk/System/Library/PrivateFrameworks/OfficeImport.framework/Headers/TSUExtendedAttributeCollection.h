/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUExtendedAttributeCollection : NSObject

{
    NSMutableDictionary *_attributes;
}

+ (_Bool)removeExtraExtendedAttributesAtPath:(id)arg1 forIntent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (id)allAttributes;
- (id)initWithPath:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 forRemoval:(_Bool)arg2 options:(int)arg3 error:(id *)arg4;
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 forRemoval:(_Bool)arg4 error:(id *)arg5;
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;
- (id)extendedAttributeForName:(id)arg1;
- (void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2;

@end
