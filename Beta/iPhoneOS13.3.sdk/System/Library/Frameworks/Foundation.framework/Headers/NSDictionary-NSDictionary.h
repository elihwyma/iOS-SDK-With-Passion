/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NSDictionary)

+ (_Bool)supportsSecureCoding;
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)_stringToWrite;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)descriptionInStringsFileFormat;
- (id)valueForKeyPath:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileModificationDate;
- (id)fileType;
- (unsigned long long)filePosixPermissions;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (long long)fileSystemNumber;
- (unsigned long long)fileSystemFileNumber;
- (_Bool)fileExtensionHidden;
- (unsigned int)fileHFSCreatorCode;
- (unsigned int)fileHFSTypeCode;
- (_Bool)fileIsImmutable;
- (_Bool)fileIsAppendOnly;
- (id)fileCreationDate;
- (id)fileOwnerAccountID;
- (id)fileGroupOwnerAccountID;
- (id)_web_numberForKey:(id)arg1;
- (int)_web_intForKey:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;

@end
