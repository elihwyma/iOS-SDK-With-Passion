/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TRIPBExtensionDescriptor, TRIPBFieldDescriptor, TRIPBUnknownFieldSet;

@interface TRIPBMessage : NSObject

{
    TRIPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    TRIPBMessage *autocreator_;
    TRIPBFieldDescriptor *autocreatorField_;
    TRIPBExtensionDescriptor *autocreatorExtension_;
    _Atomic id readOnlySemaphore_;
    struct TRIPBMessage_Storage *messageStorage_;
}

@property (copy, nonatomic) TRIPBUnknownFieldSet *unknownFields;
@property (nonatomic, readonly, getter=isInitialized) _Bool initialized;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)message;
+ (id)descriptor;
+ (id)parseFromData:(id)arg1 error:(id *)arg2;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (void)mergeFrom:(id)arg1;
- (id)descriptor;
- (unsigned long long)serializedSize;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (id)getExistingExtension:(id)arg1;
- (void)setExtension:(id)arg1 value:(id)arg2;
- (id)extensionsCurrentlySet;
- (id)getExtension:(id)arg1;
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)internalClear:(_Bool)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 descriptor:(id)arg3;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct TRIPBExtensionRange)arg2;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)clearExtension:(id)arg1;
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (id)delimitedData;
- (void)writeToOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (_Bool)hasExtension:(id)arg1;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;

@end
