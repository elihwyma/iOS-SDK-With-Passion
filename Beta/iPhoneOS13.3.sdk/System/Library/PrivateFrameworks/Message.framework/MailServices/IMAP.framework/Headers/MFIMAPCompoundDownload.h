/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPDownload.h>

@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload

{
    NSMutableArray *_subdownloads;
}

- (_Bool)isComplete;
- (unsigned long long)expectedLength;
- (unsigned long long)bytesFetched;
- (_Bool)isSuccessful;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)subdownloads;
- (void)addSubdownload:(id)arg1;
- (void)removeSubdownload:(id)arg1;

@end
