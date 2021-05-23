/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSString, TRIPBEnumDescriptor, TRIPBOneofDescriptor;

@interface TRIPBFieldDescriptor : NSObject

{
    struct TRIPBMessageFieldDescription *description_;
    TRIPBOneofDescriptor *containingOneof_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    CDUnion_a49d1a5a defaultValue_;
    Class msgClass_;
    union {
        TRIPBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int number;
@property (nonatomic, readonly) unsigned char dataType;
@property (nonatomic, readonly) _Bool hasDefaultValue;
@property (nonatomic, readonly) CDUnion_a49d1a5a defaultValue;
@property (nonatomic, readonly, getter=isRequired) _Bool required;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (nonatomic, readonly) unsigned char fieldType;
@property (nonatomic, readonly) unsigned char mapKeyDataType;
@property (nonatomic, readonly, getter=isPackable) _Bool packable;
@property (nonatomic, readonly) TRIPBOneofDescriptor *containingOneof;
@property (nonatomic, readonly) Class msgClass;
@property (nonatomic, readonly) TRIPBEnumDescriptor *enumDescriptor;

- (id)init;
- (void)dealloc;
- (_Bool)isValidEnumValue:(int)arg1;
- (id)initWithFieldDescription:(void *)arg1 includesDefault:(_Bool)arg2 syntax:(unsigned char)arg3;
- (id)textFormatName;

@end
