/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPBMessageHeaders : PBCodable <Swift>

{
    CDStruct_5df41632 _bccAddress;
    CDStruct_5df41632 _bccContactIds;
    CDStruct_5df41632 _bccDomains;
    CDStruct_20585598 _bccIsVips;
    CDStruct_5df41632 _ccAddress;
    CDStruct_5df41632 _ccContactIds;
    CDStruct_5df41632 _ccDomains;
    CDStruct_20585598 _ccIsVips;
    CDStruct_5df41632 _references;
    CDStruct_5df41632 _subjectWords;
    CDStruct_5df41632 _toAddress;
    CDStruct_5df41632 _toContactIds;
    CDStruct_5df41632 _toDomains;
    CDStruct_20585598 _toIsVips;
    unsigned long long _dateReceived;
    long long _listId;
    long long _sender;
    long long _senderContactId;
    long long _senderDomain;
    _Bool _messageIsForwarded;
    _Bool _messageIsReply;
    _Bool _senderIsVip;
    _Bool _userIsBcc;
    _Bool _userIsCc;
    _Bool _userIsSender;
    _Bool _userIsTo;
    struct {
        unsigned int dateReceived:1;
        unsigned int listId:1;
        unsigned int sender:1;
        unsigned int senderContactId:1;
        unsigned int senderDomain:1;
        unsigned int messageIsForwarded:1;
        unsigned int messageIsReply:1;
        unsigned int senderIsVip:1;
        unsigned int userIsBcc:1;
        unsigned int userIsCc:1;
        unsigned int userIsSender:1;
        unsigned int userIsTo:1;
    } _has;
}

@property (nonatomic) _Bool hasSender;
@property (nonatomic) long long sender;
@property (nonatomic) _Bool hasSenderDomain;
@property (nonatomic) long long senderDomain;
@property (nonatomic) _Bool hasSenderIsVip;
@property (nonatomic) _Bool senderIsVip;
@property (nonatomic) _Bool hasSenderContactId;
@property (nonatomic) long long senderContactId;
@property (nonatomic) _Bool hasUserIsSender;
@property (nonatomic) _Bool userIsSender;
@property (nonatomic, readonly) unsigned long long subjectWordsCount;
@property (nonatomic, readonly) long long *subjectWords;
@property (nonatomic) _Bool hasMessageIsReply;
@property (nonatomic) _Bool messageIsReply;
@property (nonatomic) _Bool hasMessageIsForwarded;
@property (nonatomic) _Bool messageIsForwarded;
@property (nonatomic) _Bool hasUserIsTo;
@property (nonatomic) _Bool userIsTo;
@property (nonatomic) _Bool hasUserIsCc;
@property (nonatomic) _Bool userIsCc;
@property (nonatomic) _Bool hasUserIsBcc;
@property (nonatomic) _Bool userIsBcc;
@property (nonatomic) _Bool hasDateReceived;
@property (nonatomic) unsigned long long dateReceived;
@property (nonatomic) _Bool hasListId;
@property (nonatomic) long long listId;
@property (nonatomic, readonly) unsigned long long referencesCount;
@property (nonatomic, readonly) long long *references;
@property (nonatomic, readonly) unsigned long long toAddressCount;
@property (nonatomic, readonly) long long *toAddress;
@property (nonatomic, readonly) unsigned long long toDomainsCount;
@property (nonatomic, readonly) long long *toDomains;
@property (nonatomic, readonly) unsigned long long toIsVipsCount;
@property (nonatomic, readonly) _Bool *toIsVips;
@property (nonatomic, readonly) unsigned long long toContactIdsCount;
@property (nonatomic, readonly) long long *toContactIds;
@property (nonatomic, readonly) unsigned long long ccAddressCount;
@property (nonatomic, readonly) long long *ccAddress;
@property (nonatomic, readonly) unsigned long long ccDomainsCount;
@property (nonatomic, readonly) long long *ccDomains;
@property (nonatomic, readonly) unsigned long long ccIsVipsCount;
@property (nonatomic, readonly) _Bool *ccIsVips;
@property (nonatomic, readonly) unsigned long long ccContactIdsCount;
@property (nonatomic, readonly) long long *ccContactIds;
@property (nonatomic, readonly) unsigned long long bccAddressCount;
@property (nonatomic, readonly) long long *bccAddress;
@property (nonatomic, readonly) unsigned long long bccDomainsCount;
@property (nonatomic, readonly) long long *bccDomains;
@property (nonatomic, readonly) unsigned long long bccIsVipsCount;
@property (nonatomic, readonly) _Bool *bccIsVips;
@property (nonatomic, readonly) unsigned long long bccContactIdsCount;
@property (nonatomic, readonly) long long *bccContactIds;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSubjectWords;
- (long long)subjectWordsAtIndex:(unsigned long long)arg1;
- (void)addSubjectWords:(long long)arg1;
- (void)clearReferences;
- (long long)referencesAtIndex:(unsigned long long)arg1;
- (void)addReferences:(long long)arg1;
- (void)clearToAddress;
- (long long)toAddressAtIndex:(unsigned long long)arg1;
- (void)addToAddress:(long long)arg1;
- (void)clearToDomains;
- (long long)toDomainAtIndex:(unsigned long long)arg1;
- (void)addToDomain:(long long)arg1;
- (void)clearToIsVips;
- (_Bool)toIsVipAtIndex:(unsigned long long)arg1;
- (void)addToIsVip:(_Bool)arg1;
- (void)clearToContactIds;
- (long long)toContactIdAtIndex:(unsigned long long)arg1;
- (void)addToContactId:(long long)arg1;
- (void)clearCcAddress;
- (long long)ccAddressAtIndex:(unsigned long long)arg1;
- (void)addCcAddress:(long long)arg1;
- (void)clearCcDomains;
- (long long)ccDomainAtIndex:(unsigned long long)arg1;
- (void)addCcDomain:(long long)arg1;
- (void)clearCcIsVips;
- (_Bool)ccIsVipAtIndex:(unsigned long long)arg1;
- (void)addCcIsVip:(_Bool)arg1;
- (void)clearCcContactIds;
- (long long)ccContactIdAtIndex:(unsigned long long)arg1;
- (void)addCcContactId:(long long)arg1;
- (void)clearBccAddress;
- (long long)bccAddressAtIndex:(unsigned long long)arg1;
- (void)addBccAddress:(long long)arg1;
- (void)clearBccDomains;
- (long long)bccDomainAtIndex:(unsigned long long)arg1;
- (void)addBccDomain:(long long)arg1;
- (void)clearBccIsVips;
- (_Bool)bccIsVipAtIndex:(unsigned long long)arg1;
- (void)addBccIsVip:(_Bool)arg1;
- (void)clearBccContactIds;
- (long long)bccContactIdAtIndex:(unsigned long long)arg1;
- (void)addBccContactId:(long long)arg1;
- (void)setSubjectWords:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setReferences:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setToAddress:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setToDomains:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setToIsVips:(_Bool *)arg1 count:(unsigned long long)arg2;
- (void)setToContactIds:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setCcAddress:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setCcDomains:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setCcIsVips:(_Bool *)arg1 count:(unsigned long long)arg2;
- (void)setCcContactIds:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setBccAddress:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setBccDomains:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setBccIsVips:(_Bool *)arg1 count:(unsigned long long)arg2;
- (void)setBccContactIds:(long long *)arg1 count:(unsigned long long)arg2;

@end
