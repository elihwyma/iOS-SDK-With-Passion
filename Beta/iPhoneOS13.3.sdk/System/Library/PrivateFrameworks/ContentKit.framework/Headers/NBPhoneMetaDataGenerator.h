/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NBPhoneMetaDataGenerator : NSObject

- (id)init;
- (id)parseJSON:(id)arg1;
- (id)generateMetaData;
- (void)generateMetadataClasses;
- (void)createClassWithDictionary:(id)arg1 name:(id)arg2 isTestData:(_Bool)arg3;
- (id)mappingObject:(id)arg1;
- (id)genRandStringLength:(int)arg1;
- (id)indentTab:(int)arg1;
- (id)getSRCDirectoryPath;
- (id)documentsDirectory;
- (id)generateMetaDataWithTest;
- (id)generateSourceCodeWith:(id)arg1 name:(id)arg2 type:(int)arg3 isTestData:(_Bool)arg4;
- (id)generateMappingSourceCodeWith:(id)arg1 name:(id)arg2 type:(int)arg3 isTestData:(_Bool)arg4;
- (id)stringForSourceCode:(id)arg1;
- (id)numberForSourceCode:(id)arg1;
- (id)phoneNumberDescWithData:(id)arg1 name:(id)arg2;
- (id)phoneNumberDescWithData:(id)arg1;
- (id)phoneNumberFormatWithData:(id)arg1 name:(id)arg2;
- (id)phoneNumberFormatArrayWithData:(id)arg1 name:(id)arg2;

@end
