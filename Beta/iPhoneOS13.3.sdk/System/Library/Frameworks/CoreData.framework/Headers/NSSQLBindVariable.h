/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSAttributeDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject

{
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSAttributeDescription *_attributeDescription;
    long long _int64;
}

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)value;
- (unsigned int)index;
- (void)setValue:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (unsigned char)sqlType;
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;
- (id)attributeDescription;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 allowCoercion:(_Bool)arg4;
- (void)setInt64:(long long)arg1;
- (void)setUnsignedInt:(unsigned int)arg1;
- (long long)int64;
- (unsigned int)unsignedInt;
- (void)setSQLType:(unsigned char)arg1;
- (_Bool)hasObjectValue;
- (_Bool)allowsCoercion;

@end
