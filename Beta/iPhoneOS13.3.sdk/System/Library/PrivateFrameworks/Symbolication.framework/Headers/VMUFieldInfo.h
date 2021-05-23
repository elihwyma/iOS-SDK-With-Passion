/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, VMUClassInfo;

@interface VMUFieldInfo : NSObject

{
    NSString *_ivarName;
    NSString *_typeName;
    unsigned int _scanType;
    unsigned int _offset;
    unsigned int _size;
    unsigned int _scannable;
    unsigned int _stride;
    unsigned int _flags;
    VMUClassInfo *_destinationLayout;
    NSMutableArray *_subFieldArray;
    void *_swiftTyperef;
}

@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) _Bool isCapture;
@property (nonatomic, readonly) _Bool isByref;
@property (nonatomic, readonly) _Bool isStorageImplPointer;
@property (nonatomic, readonly) _Bool isArraySize;
@property (nonatomic, readonly) _Bool isArrayEntries;
@property (nonatomic, readonly) _Bool isStorageBitmapPointer;
@property (nonatomic, readonly) _Bool isKeysPointer;
@property (nonatomic, readonly) _Bool isValuesPointer;
@property (nonatomic, readonly) _Bool isValueField;
@property (nonatomic, readonly) _Bool isKeyField;
@property (readonly) void *swiftTyperef;
@property (readonly) NSString *typedDescription;
@property (nonatomic, readonly) NSString *ivarName;
@property (nonatomic, readonly) NSString *typeName;
@property (readonly) unsigned int scanType;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int size;
@property (readonly) unsigned int scannableSize;
@property (readonly) unsigned int stride;
@property (readonly) unsigned int bitfieldWidth;
@property (nonatomic, readonly) VMUClassInfo *destinationLayout;
@property (nonatomic, readonly) NSArray *subFieldArray;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopy;
- (void)_setSize:(unsigned int)arg1;
- (void)_setFlags:(unsigned int)arg1;
- (id)fullIvarNameAtOffset:(unsigned int)arg1;
- (id)getLeafFieldAtOffset:(unsigned int)arg1 leafOffset:(unsigned int *)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5;
- (id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8 swiftTyperef:(void *)arg9;
- (id)initWithObjcIvar:(struct objc_ivar *)arg1 size:(unsigned int)arg2 isARC:(_Bool)arg3 is64Bit:(_Bool)arg4;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3 returnedDestinationLayoutClassInfoIndex:(unsigned int *)arg4;
- (id)_getFieldAtOffset:(unsigned int)arg1;
- (id)_fullIvarNameAtOffset:(unsigned int)arg1 leafOffset:(unsigned int *)arg2 depth:(unsigned int)arg3;
- (void)initializeSubFieldArray;
- (id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (void)_setIvarName:(id)arg1;
- (void)_setTypeName:(id)arg1;
- (void)_setScanType:(unsigned int)arg1;
- (void)_setOffset:(unsigned int)arg1;
- (void)_setScannableSize:(unsigned int)arg1;
- (void)_setStride:(unsigned int)arg1;
- (void)_setDestinationLayout:(id)arg1;
- (id)descriptionOfFieldValueInObjectMemory:(void *)arg1 scanner:(id)arg2;

@end
