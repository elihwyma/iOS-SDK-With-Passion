/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFRepresentation.h>

@class NSData, NSDate, NSString, NSURL, WFFileType;

@interface WFFileRepresentation : WFRepresentation

{
    _Bool _deletesFileOnDeallocation;
    _Bool _securityScopedResource;
    NSString *_filename;
    NSData *_data;
    NSURL *_fileURL;
    WFFileType *_wfType;
    NSString *_wfName;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSURL *_originalURL;
}

@property (retain, nonatomic) NSString *filename;
@property (nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly) WFFileType *wfType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) long long representationType;
@property (nonatomic, readonly) _Bool deletesFileOnDeallocation;
@property (nonatomic, readonly) _Bool securityScopedResource;

+ (_Bool)supportsSecureCoding;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2;
+ (void)addDisallowedDirectory:(id)arg1;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 unsanitizedName:(id *)arg3;
+ (id)typeOfFile:(id)arg1;
+ (_Bool)sandboxAllowsRepresentingFileURL:(id)arg1;
+ (_Bool)fileIsInDisallowedDirectory:(id)arg1;
+ (id)typeOfData:(id)arg1;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
+ (id)disallowedDirectoryURLs;
+ (_Bool)isAllowedToRepresentFileURL:(id)arg1;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 unsanitizedName:(id *)arg3;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputStream;
- (id)mappedData;
- (_Bool)writeToFileURL:(id)arg1 overwriting:(_Bool)arg2 error:(id *)arg3;
- (id)mappedDataWithError:(id *)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)isEncodable;
- (id)initWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
- (_Bool)writeToTemporaryFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToFileURL:(id)arg1 copy:(_Bool)arg2 overwrite:(_Bool)arg3 error:(id *)arg4;
- (id)copyWithName:(id)arg1 addingExtensionIfNecessary:(_Bool)arg2 zone:(struct _NSZone *)arg3;

@end
