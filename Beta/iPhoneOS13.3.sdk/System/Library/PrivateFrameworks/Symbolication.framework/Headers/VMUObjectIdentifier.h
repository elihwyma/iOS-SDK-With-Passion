/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, VMUClassInfo, VMUClassInfoMap, VMUNonOverlappingRangeArray, VMUSwiftRuntimeInfo, VMUTaskMemoryScanner;

@interface VMUObjectIdentifier : NSObject

{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    _Bool _needToValidateAddressRange;
    CDUnknownBlockType _memoryReader;
    VMUTaskMemoryScanner *_scanner;
    unsigned int _objcABI;
    struct libSwiftRemoteMirrorWrapper *_swiftMirror;
    NSMutableDictionary *_libSwiftRemoteMirrors;
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoStableABI;
    VMUSwiftRuntimeInfo *_swiftRuntimeInfoPreABI;
    _Bool _debugSwiftRemoteMirror;
    VMUClassInfoMap *_realizedIsaToClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    NSMutableArray *_objCClassStructureClassInfoIndexes;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    unsigned long long _objCClassCount;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    CDUnknownBlockType _isaTranslator;
    _Bool _fragileNonPointerIsas;
    unsigned long long _lastCPlusPlusIsa;
    VMUClassInfo *_lastCPlusPlusClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSMutableDictionary *_pidToProcessNameDict;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    _Bool _targetProcessContainsMallocStackLoggingLiteZone;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
    unsigned int _osDispatchMachOffsetInOSXPCConnection;
    unsigned long long _taggedPointerMask;
    unsigned long long _taggedPointerObfuscator;
}

@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI;
@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI;
@property (nonatomic, readonly) struct libSwiftRemoteMirrorWrapper *swiftMirror;
@property (readonly) _Bool needToValidateAddressRange;
@property (readonly) _Bool hasSwiftContent;
@property (readonly) _Bool hasSwiftReflection;
@property (readonly) unsigned int objcABI;
@property (nonatomic, readonly) CDUnknownBlockType memoryReader;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned long long taggedPointerMask;
@property (nonatomic, readonly) struct _CSTypeRef symbolicator;

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)_scanner;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 scanner:(id)arg3;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4;
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;
- (struct _CSTypeRef)_symbolicator;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (unsigned long long)translateIsaPointer:(unsigned long long)arg1;
- (void)loadSwiftReflectionLibraries;
- (void)_populateSwiftABIVariables;
- (void)findCFTypes;
- (void)setupIsaTranslator;
- (void)findObjCAndSwiftClasses;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (_Bool)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (id)_classInfoWithPthreadType:(id)arg1;
- (id)classInfoForNonobjectMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (void)_faultClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)arg1 recursionDepth:(unsigned int)arg2;
- (id)osMajorMinorVersionString;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(_Bool)arg3;
- (id)labelForNSNumber:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDate:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSString:(void *)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(_Bool)arg4;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)labelForNSString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(_Bool)arg2;
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void *)arg3;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchMach:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (void)_findOffsetsInOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMallocBlock:(struct _VMURange)arg1;
- (id)labelForMallocBlock:(struct _VMURange)arg1 usingHandlerBlock:(CDUnknownBlockType)arg2;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4 usingHandlerBlock:(CDUnknownBlockType)arg5;
- (id)labelForClassStructure:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataExtRW:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRO:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForTaggedPointer:(void *)arg1;
- (_Bool)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (_Bool)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef)arg1 avoidSystem:(_Bool)arg2;
- (_Bool)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef)arg1;
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext *)arg1;
- (unsigned long long)CFTypeCount;
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;
- (struct _CSTypeRef)symbolForAddress:(unsigned long long)arg1;
- (id)classNameForTaggedPointer:(void *)arg1;
- (id)labelForNSConcreteAttributedString:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSURL:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSPathStore2:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForCFBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSBundle:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSArray:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFDictionary:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteHashTable:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFSet:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteMutableData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSInlineData:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchQueue:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSLog:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)noLabelForOSXPCObject:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSTransaction:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelFor_NSActivityAssertion:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCActivity:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForProtocol:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCInterface:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCConnection:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelFor__NSMallocBlock__:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (_Bool)_dlopenLibSwiftRemoteMirrorNearExecutable;

@end
