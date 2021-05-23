/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFFileArchiveEntry, NSData, NSError, NSMutableDictionary, NSURL;

@interface MFFileArchiveDirectory : NSObject

{
    NSMutableDictionary *_entries;
    NSMutableDictionary *_scrubbedEntries;
    MFFileArchiveEntry *_mainEntry;
    NSURL *_url;
    NSData *_contents;
    NSError *_error;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *contents;
@property (retain, nonatomic, readonly) NSError *error;

+ (id)archiveDirectory;
+ (struct _NSRange)rangeOfCentralDirectoryInData:(id)arg1;
+ (struct _NSRange)_rangeOfCentralDirectory:(long long)arg1;
+ (struct CentralDirectory *)_centralDirectory:(id)arg1;
+ (id)_entriesFromCentralDictionary:(struct CentralDirectory *)arg1 inData:(id)arg2 archiveData:(id)arg3;
+ (struct CentralHeader *)_centralHeader:(id)arg1;
+ (_Bool)_hasZipSignature:(id)arg1;

- (id)description;
- (_Bool)inputWithURL:(id)arg1;
- (_Bool)setArchiveEntry:(id)arg1;
- (id)archiveEntries;
- (_Bool)inputWithData:(id)arg1;
- (void)_scrubContentDirectory;
- (id)mainEntry;
- (void)setMainEntry:(id)arg1;
- (id)scrubbedArchiveEntries;

@end
