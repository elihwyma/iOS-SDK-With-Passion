/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPCompoundDownload.h>

@class MFMessage, MFMimePart;

@protocol MFCollectingDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload

{
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    unsigned int _allowsPartialDownloads:1;
    unsigned int _usingPartialDownloads:1;
    unsigned int _startedFetch:1;
    unsigned int _fetchingMessageContents:1;
    unsigned int _fetchingBodyText:1;
    unsigned int _doneAddingSubdownloads:1;
    unsigned int _fetchBodyData:1;
    id <MFCollectingDataConsumer> _headerConsumer;
    id <MFCollectingDataConsumer> _textConsumer;
    _Bool _receivedHeaders;
    _Bool _receivedText;
}

- (id)data;
- (id)message;
- (_Bool)isComplete;
- (id)initWithMessage:(id)arg1;
- (id)topLevelPart;
- (_Bool)partial;
- (void)setTopLevelPart:(id)arg1;
- (_Bool)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(_Bool)arg1;
- (_Bool)isSuccessful;
- (void)setFetchBodyData:(_Bool)arg1;
- (void)handleFetchResult:(id)arg1;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (id)_networkConverterWithConsumer:(id)arg1 didReceiveData:(CDUnknownBlockType)arg2;
- (_Bool)fetchBodyData;

@end
