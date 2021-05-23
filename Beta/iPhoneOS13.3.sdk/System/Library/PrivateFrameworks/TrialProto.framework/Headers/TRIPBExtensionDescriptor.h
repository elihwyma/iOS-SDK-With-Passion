/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSString, TRIPBEnumDescriptor;

@interface TRIPBExtensionDescriptor : NSObject

{
    struct TRIPBExtensionDescription *description_;
    CDUnion_a49d1a5a defaultValue_;
    Class containingMessageClass_;
}

@property (nonatomic, readonly) int wireType;
@property (nonatomic, readonly) int alternateWireType;
@property (nonatomic, readonly) unsigned int fieldNumber;
@property (nonatomic, readonly) Class containingMessageClass;
@property (nonatomic, readonly) unsigned char dataType;
@property (nonatomic, readonly, getter=isRepeated) _Bool repeated;
@property (nonatomic, readonly, getter=isPackable) _Bool packable;
@property (nonatomic, readonly) Class msgClass;
@property (nonatomic, readonly) NSString *singletonName;
@property (nonatomic, readonly) TRIPBEnumDescriptor *enumDescriptor;
@property (nonatomic, readonly) id defaultValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)singletonNameC;
- (id)initWithExtensionDescription:(struct TRIPBExtensionDescription *)arg1;
- (long long)compareByFieldNumber:(id)arg1;

@end
