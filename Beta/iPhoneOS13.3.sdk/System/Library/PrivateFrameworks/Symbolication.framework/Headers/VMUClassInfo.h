/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface VMUClassInfo : NSObject

{
    unsigned long long _remoteIsa;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    unsigned int _defaultScanType;
    unsigned int _remoteType;
    id *_localIvarList;
    NSString *_remoteClassName;
    NSString *_displayName;
    NSString *_remoteBinaryPath;
    VMUClassInfo *_superclassLayout;
    VMUClassInfo *_genericLayout;
    NSMutableArray *_variantEvaluators;
    NSMutableArray *_variantActions;
    const char *_weakLayout;
    const char *_strongLayout;
    BOOL _hasSpecificLayout;
    BOOL _hasVariantLayout;
    _Bool _usesSwiftRefcounting;
}

@property (nonatomic, readonly) unsigned int defaultScanType;
@property (nonatomic, readonly) _Bool hasSpecificLayout;
@property (nonatomic, readonly) _Bool hasVariantLayout;
@property (nonatomic, readonly) unsigned int pointerSize;
@property (nonatomic, readonly) _Bool usesSwiftRefcounting;
@property (nonatomic, readonly) unsigned int ivarCount;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *binaryName;
@property (nonatomic, readonly) NSString *binaryPath;
@property (nonatomic, readonly) NSString *fullIvarDescription;
@property (nonatomic, readonly) NSString *shortIvarDescription;
@property (nonatomic, readonly) VMUClassInfo *superclassInfo;
@property (nonatomic, readonly) VMUClassInfo *genericInfo;
@property (readonly) unsigned int infoType;
@property (readonly) unsigned long long remoteIsa;
@property (readonly) unsigned int instanceSize;
@property (readonly) _Bool isARR;
@property (readonly) _Bool isRealized;
@property (readonly) _Bool isMetaClass;
@property (readonly) _Bool isRootClass;
@property (readonly) _Bool hasCppConstructorOrDestructor;

+ (void)initialize;
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned int)arg3;
+ (id)_genericBlockByrefInfo;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (unsigned long long)sizeofClassStructure;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)mutableCopy;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)identifyObjCClassStructureBlocksWithScanner:(id)arg1 addressIdentifierBlock:(CDUnknownBlockType)arg2;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withScanner:(id)arg3 memoryReader:(CDUnknownBlockType)arg4;
- (void)enumerateSublayoutsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateAllPointerFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateScanningLocationsForSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 externalValues:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)fieldAtOrBeforeOffset:(unsigned int)arg1;
- (id)firstFieldWithName:(id)arg1;
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned int)arg3;
- (void)_processARRLayout:(const char *)arg1 scanType:(unsigned int)arg2;
- (void)_demangleClassName;
- (void)_setClassNameWithAddress:(unsigned long long)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (void)_parseIvarsAndLayouts;
- (id)_initWithClass:(unsigned long long)arg1 type:(unsigned int)arg2 realizedOnly:(_Bool)arg3 infoMap:(id)arg4 objectIdentifier:(id)arg5 reader:(CDUnknownBlockType)arg6;
- (void)_setBinaryPath:(id)arg1;
- (void)_freeLocalIvarList;
- (id)_copyWithInstanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2 asVariant:(_Bool)arg3 mutable:(_Bool)arg4;
- (void)_identifyObjCClassStructureBlocksForIsa:(unsigned long long)arg1 isMetaclass:(_Bool)arg2 withScanner:(id)arg3 addressIdentifierBlock:(CDUnknownBlockType)arg4;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (void)_logDescriptionWithSuperclasses:(_Bool)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;
- (void)_applyExtendedLayout:(const char *)arg1 withSize:(unsigned int)arg2;
- (void)enumerateAllFieldsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)_totalIvarCount;
- (void)enumerateClassHierarchyWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePointerTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setSuperclassInfo:(id)arg1;
- (void)_setDefaultScanType:(unsigned int)arg1;
- (id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(struct swift_typeinfo)arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg4;
- (id)initSwiftClassWithName:(id)arg1 classInfoType:(unsigned int)arg2 size:(unsigned long long)arg3;
- (id)initWithClass:(unsigned long long)arg1 type:(unsigned int)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(CDUnknownBlockType)arg5;
- (id)initWithRealizedClass:(unsigned long long)arg1 type:(unsigned int)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(CDUnknownBlockType)arg5;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 memoryReader:(CDUnknownBlockType)arg3;
- (void)_addFields:(id)arg1;
- (void)_replaceField:(id)arg1 withFields:(id)arg2;
- (void)_replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)_setFields:(id)arg1;
- (void)_addVariantAction:(CDUnknownBlockType)arg1 withEvaluator:(CDUnknownBlockType)arg2;
- (void)_setIsa:(unsigned long long)arg1;
- (id)scanDescriptionWithSize:(unsigned int)arg1;

@end
