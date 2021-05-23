/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPDownload.h>

@class NSError, NSString;

@interface MFIMAPSimpleDownload : MFIMAPDownload

{
    NSString *_section;
    NSError *_error;
    unsigned long long _length;
    unsigned int _knownLength:1;
    unsigned int _complete:1;
    struct _NSRange _range;
    unsigned long long _originalDataLength;
    unsigned long long _offsetAdjustment;
}

- (id)error;
- (void)setError:(id)arg1;
- (_Bool)isComplete;
- (id)section;
- (unsigned long long)expectedLength;
- (unsigned long long)bytesFetched;
- (_Bool)isSuccessful;
- (void)handleFetchResult:(id)arg1;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(_Bool)arg4 range:(struct _NSRange)arg5 consumer:(id)arg6;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 range:(struct _NSRange)arg3 consumer:(id)arg4;

@end
