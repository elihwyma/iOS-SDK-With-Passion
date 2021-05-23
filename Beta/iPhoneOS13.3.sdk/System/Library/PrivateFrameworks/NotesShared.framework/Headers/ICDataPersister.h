/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICDataCryptor, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICDataPersister : NSObject

{
    unsigned long long _accumulatedDataSize;
    ICDataCryptor *_dataCryptor;
    NSURL *_cacheDirectoryURL;
    NSString *_objectIdentifier;
    NSMutableArray *_allURLs;
    NSMutableDictionary *_identifierToDataDictionary;
}

@property (nonatomic, readonly) ICDataCryptor *dataCryptor;
@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSMutableArray *allURLs;
@property (nonatomic, readonly) NSMutableDictionary *identifierToDataDictionary;
@property (nonatomic) unsigned long long accumulatedDataSize;

+ (_Bool)supportsSecureCoding;
+ (id)rootCacheDirectoryPathForPasteboard:(_Bool)arg1;
+ (void)deletePasteboardDataFiles;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadDataForIdentifier:(id)arg1;
- (_Bool)saveData:(id)arg1 identifier:(id)arg2;
- (void)createDataCryptorIfNecessary;
- (_Bool)makeSureCacheDirectoryExists;
- (id)initWithObjectIdentifier:(id)arg1 forPasteboard:(_Bool)arg2;
- (void)deleteDataFiles;
- (_Bool)verifyDataFiles;

@end
