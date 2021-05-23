/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCMapper.h>

@class NSData, NSString, NSURL, OCDReader, OITSUProgressContext;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper

{
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    _Bool mTryAlternateReader;
    OITSUProgressContext *mProgressContext;
    CDUnknownBlockType mOfficeDOMInspector;
    NSString *_lastPasswordAttempted;
}

@property (retain) OITSUProgressContext *progressContext;
@property (copy, nonatomic) NSString *lastPasswordAttempted;
@property (copy, nonatomic) CDUnknownBlockType officeDOMInspector;

+ (void)initialize;
+ (id)xmlPathExtensions;
+ (_Bool)URLIsXML:(id)arg1;
+ (Class)xmlReaderClass;
+ (Class)binaryReaderClass;
+ (Class)readerClassForURL:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (_Bool)start;
- (id)url;
- (void)setURL:(id)arg1;
- (id)filename;
- (id)displayName;
- (_Bool)setPassphrase:(id)arg1;
- (_Bool)isDocumentEncryptedUnsupportedVersionHelper:(_Bool *)arg1 errorMessage:(id *)arg2 readError:(_Bool *)arg3;
- (_Bool)isXML;
- (_Bool)tryAlternateReader;
- (_Bool)isDocumentEncryptedUnsupportedVersion:(_Bool *)arg1 errorMessage:(id *)arg2;
- (void)finalizeWithDocumentState:(id)arg1;
- (Class)readerClass;

@end
