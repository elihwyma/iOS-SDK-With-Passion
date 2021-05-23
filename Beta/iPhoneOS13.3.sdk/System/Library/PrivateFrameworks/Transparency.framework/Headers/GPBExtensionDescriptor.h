/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBEnumDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface GPBExtensionDescriptor : NSObject

{
    struct GPBExtensionDescription *description_;
    CDUnion_88782d86 defaultValue_;
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
@property (nonatomic, readonly) GPBEnumDescriptor *enumDescriptor;
@property (nonatomic, readonly) id defaultValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)singletonNameC;
- (id)initWithExtensionDescription:(struct GPBExtensionDescription *)arg1;
- (long long)compareByFieldNumber:(id)arg1;

@end
