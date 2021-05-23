/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, PASymbol, PASymbolOwner;

@interface PASymbolHandle : NSObject

{
    PASymbol *_symbol;
    PASymbolOwner *_owner;
    unsigned long long _symbolOwnerStartAddressInTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool hasSymbolOwner;
@property (readonly) NSUUID *symbolOwnerUUID;
@property (readonly) _Bool hasSymbolOwnerStartAddressInTask;
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;
@property (readonly) NSString *symbolOwnerName;
@property (retain) NSString *symbolOwnerPath;
@property (readonly) unsigned long long symbolOwnerTextSegmentLength;
@property (readonly) _Bool symbolOwnerIsTextExecSegment;
@property (readonly) NSString *symbolOwnerBundleIdentifier;
@property (readonly) NSString *symbolOwnerBundleVersion;
@property (readonly) NSString *symbolOwnerBundleShortVersion;
@property (readonly) NSString *symbolOwnerBinaryVersion;
@property (readonly) _Bool hasSymbol;
@property (readonly) NSString *symbolName;
@property (readonly) unsigned long long symbolStartAddressInTask;
@property (readonly) unsigned long long symbolLength;

+ (id)classDictionaryKey;
+ (id)getEmptySymbolHandle;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)_initAsEmptyHandle;
- (id)_sourceInformationForAddress:(unsigned long long)arg1;
- (_Bool)hasSourceInformationForAddress:(unsigned long long)arg1;
- (id)debugDescriptionForAddress:(unsigned long long)arg1;
- (id)sourceFileNameForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg1;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg1;
- (unsigned long long)sourceStartAddressInTaskForAddress:(unsigned long long)arg1;
- (unsigned long long)sourceLengthForAddress:(unsigned long long)arg1;
- (long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2;
- (id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3;
- (_Bool)addToPersistentCache;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;

@end
