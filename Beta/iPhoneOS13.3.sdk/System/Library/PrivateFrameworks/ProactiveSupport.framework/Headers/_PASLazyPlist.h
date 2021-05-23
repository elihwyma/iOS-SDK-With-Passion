/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _PASLazyPlist : NSObject

{
    NSData *_backingData;
    CDStruct_601793be _mappedRegion;
    const struct __CFAllocator *_stringContentsDeallocator;
}

@property (nonatomic, readonly) const CDStruct_601793be *mappedRegion;
@property (nonatomic, readonly) const struct __CFAllocator *stringContentsDeallocator;

+ (CDUnknownBlockType)deserializationStatsHandler;
+ (id)propertyListWithData:(id)arg1 error:(id *)arg2;
+ (id)propertyListWithPath:(id)arg1 error:(id *)arg2;
+ (id)propertyListWithPath:(id)arg1 fileRange:(struct _NSRange)arg2 error:(id *)arg3;
+ (id)dictionaryWithPath:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithData:(id)arg1 error:(id *)arg2;
+ (id)arrayWithPath:(id)arg1 error:(id *)arg2;
+ (id)arrayWithData:(id)arg1 error:(id *)arg2;
+ (id)dataWithPropertyList:(id)arg1 error:(id *)arg2;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id *)arg3;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long *)arg3 error:(id *)arg4;
+ (_Bool)isLazyPlistLikelyContainedInData:(id)arg1 version:(unsigned long long *)arg2;
+ (_Bool)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 version:(unsigned long long *)arg2;
+ (CDUnknownBlockType)serializationStatsHandler;
+ (void)setSerializationStatsHandler:(CDUnknownBlockType)arg1;
+ (void)setDeserializationStatsHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)_retainForStringAllocation;
- (id)_initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id *)arg3;
- (_Bool)_validateHeader:(const struct _PASLPHeader *)arg1 filename:(id)arg2 error:(id *)arg3;
- (_Bool)_validateStringTableWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 rootValue:(CDStruct_c0454aff)arg2 recursionDepth:(unsigned long long)arg3 stats:(struct _PASLPObjectGraphStats *)arg4 error:(id *)arg5;
- (id)_rootObjectWithErrMsg:(id *)arg1;
- (id)_objectForValue:(CDStruct_c0454aff)arg1;
- (_Bool)_decodeValue:(CDStruct_c0454aff)arg1 handleBoolean:(CDUnknownBlockType)arg2 handleTaggedInt:(CDUnknownBlockType)arg3 handleBoxedInt:(CDUnknownBlockType)arg4 handleTaggedFloat:(CDUnknownBlockType)arg5 handleBoxedFloat:(CDUnknownBlockType)arg6 handleDate:(CDUnknownBlockType)arg7 handleData:(CDUnknownBlockType)arg8 handleString:(CDUnknownBlockType)arg9 handleDict:(CDUnknownBlockType)arg10 handleArray:(CDUnknownBlockType)arg11 errMsg:(id *)arg12;
- (_Bool)_decodeDictionaryKeyValue:(CDStruct_c0454aff)arg1 handleString:(CDUnknownBlockType)arg2 errMsg:(id *)arg3;
- (id)_objectForValue:(CDStruct_c0454aff)arg1 errMsg:(id *)arg2;

@end
