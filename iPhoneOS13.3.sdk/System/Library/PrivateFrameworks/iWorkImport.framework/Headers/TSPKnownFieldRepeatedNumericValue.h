//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPKnownField.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSPKnownFieldRepeatedNumericValue : TSPKnownField
{
    NSMutableArray *_values;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (void)mergeToMessage:(struct Message )arg1 reflection:(const struct Reflection )arg2;
- (id)initSubclassWithFieldDescriptor:(const struct FieldDescriptor )arg1 fieldInfo:(const struct FieldInfo )arg2 message:(const struct Message )arg3 reflection:(const struct Reflection )arg4;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor )arg1 fieldInfo:(const struct FieldInfo )arg2 message:(const struct Message )arg3 reflection:(const struct Reflection )arg4;

@end

