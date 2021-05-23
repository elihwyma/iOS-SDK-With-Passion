/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData

{
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags {
        unsigned int _isStoredExternally:1;
        unsigned int _hasMappedData:1;
        unsigned int _cleanupOnDealloc:1;
        unsigned int _dataProtectionLevel:3;
        unsigned int _isStoredUbiquitously:1;
        unsigned int _createdByUbiquityImport:1;
        unsigned int _reserved:24;
    } _externalDataFlags;
}

+ (Class)classForKeyedUnarchiver;
+ (_Bool)_updateFileDescriptorsInUseReserveNew:(_Bool)arg1;
+ (_Bool)_releaseReservedMapFileDescriptor;
+ (_Bool)_reserveMapFileDescriptor;

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (const void *)bytes;
- (id)copy;
- (id)mutableCopy;
- (void)finalize;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (Class)classForCoder;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (Class)classForArchiver;
- (_Bool)isEqualToData:(id)arg1;
- (id)UUID;
- (id)filename;
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6;
- (_Bool)hasExternalReferenceContent;
- (const char *)_externalReferenceLocation;
- (id)_originalData;
- (const char *)_safeguardLocation;
- (int)preferredProtectionLevel;
- (unsigned long long)_bytesLengthForExternalReference;
- (void)doCleanupOnDealloc;
- (id)_safeguardLocationString;
- (id)externalReferenceLocationString;
- (id)databaseValue;
- (const void *)_bytesPtrForStore;
- (unsigned long long)_bytesLengthForStore;
- (id)constructSafeguardStringFromString:(id)arg1;
- (void)_doCleanup;
- (const void *)_bytesPtrForExternalReference;
- (_Bool)_attemptToMapData:(id *)arg1;
- (id)_exceptionForReadError:(id)arg1;
- (const void *)_retrieveExternalData;
- (_Bool)_isEqualHelper:(id)arg1;
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;
- (void)_setBytesForExternalReference:(const void *)arg1;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (id)_externalReferenceLocationString;
- (_Bool)_createdByUbiquityImport;

@end
