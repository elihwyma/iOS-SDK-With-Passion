/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface MFIMAPFetchResult : NSObject

{
    int _itemType;
    unsigned long long _modSequenceNumber;
    union {
        NSArray *envelope;
        NSDate *internalDate;
        unsigned long long messageSize;
        NSArray *bodyStructure;
        struct {
            NSString *section;
            unsigned long long startOffset;
            NSData *sectionData;
        } bodySectionInfo;
        unsigned int uid;
        unsigned long long uniqueRemoteId;
        struct {
            unsigned long long messageFlags;
            NSArray *customFlags;
        } flags;
    } _typeSpecific;
}

- (void)dealloc;
- (id)description;
- (int)type;
- (unsigned int)uid;
- (id)initWithType:(int)arg1;
- (unsigned int)encoding;
- (void)setUid:(unsigned int)arg1;
- (unsigned long long)startOffset;
- (id)section;
- (void)setSection:(id)arg1;
- (void)setStartOffset:(unsigned long long)arg1;
- (id)fetchData;
- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)arg1;
- (id)envelope;
- (unsigned long long)messageFlags;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (unsigned long long)modSequenceNumber;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setFlagsArray:(id)arg1;
- (id)internalDate;
- (id)customFlagsArray;
- (id)flagsArray;
- (id)bodyStructure;
- (void)setEnvelope:(id)arg1;
- (void)setInternalDate:(id)arg1;
- (void)setFetchData:(id)arg1;
- (void)setBodyStructure:(id)arg1;
- (void)setCustomFlagsArray:(id)arg1;

@end
