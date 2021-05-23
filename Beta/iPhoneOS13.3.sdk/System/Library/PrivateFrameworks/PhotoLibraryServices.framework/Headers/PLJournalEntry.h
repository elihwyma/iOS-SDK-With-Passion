/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSPersistentHistoryToken, PLJournalEntryHeader;

@protocol PLJournalEntryPayload, PLJournalEntryPayloadID;

@interface PLJournalEntry : NSObject

{
    id <PLJournalEntryPayloadID> _payloadID;
    id <PLJournalEntryPayload> _payload;
    PLJournalEntryHeader *_header;
    NSPersistentHistoryToken *_historyToken;
}

@property (retain, nonatomic) id <PLJournalEntryPayloadID> payloadID;
@property (nonatomic) unsigned int payloadVersion;
@property (retain, nonatomic) PLJournalEntryHeader *header;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) id <PLJournalEntryPayload> payload;

- (id)init;
- (id)description;
- (id)debugDescription;
- (unsigned long long)entryType;
- (id)initWithPayloadID:(id)arg1 payload:(id)arg2 entryType:(int)arg3;
- (id)initForInsertWithPayload:(id)arg1;
- (id)initForUpdateWithPayload:(id)arg1;
- (id)initForDeleteWithPayloadID:(id)arg1;
- (_Bool)_readFromFileHandle:(id)arg1 decodePayload:(_Bool)arg2 payloadClass:(Class)arg3 error:(id *)arg4;
- (_Bool)readFromFileHandle:(id)arg1 decodePayload:(_Bool)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long *)arg4 error:(id *)arg5;
- (void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4;
- (void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4;
- (_Bool)writeToFileHandle:(id)arg1 error:(id *)arg2;
- (id)descriptionWithBuilder:(id)arg1;

@end
