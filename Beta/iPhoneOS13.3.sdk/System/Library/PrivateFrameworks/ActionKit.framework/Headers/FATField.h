/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FATField : NSObject

{
    _Bool _optional;
    unsigned int _index;
    unsigned int _type;
    NSString *_name;
    Class _structClass;
    FATField *_valueField;
    FATField *_keyField;
}

@property unsigned int index;
@property unsigned int type;
@property _Bool optional;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) Class structClass;
@property (retain, nonatomic) FATField *valueField;
@property (retain, nonatomic) FATField *keyField;

+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 structClass:(Class)arg5;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 valueField:(id)arg5;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6;
+ (id)nameForFatFieldType:(unsigned int)arg1;

- (id)description;

@end
