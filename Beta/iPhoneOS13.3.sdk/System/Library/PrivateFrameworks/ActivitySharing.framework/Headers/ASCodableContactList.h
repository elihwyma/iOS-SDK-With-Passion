/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ASCodableContactList : PBCodable

{
    NSMutableArray *_contacts;
}

@property (retain, nonatomic) NSMutableArray *contacts;

+ (Class)contactsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearContacts;
- (unsigned long long)contactsCount;
- (void)addContacts:(id)arg1;
- (id)contactsAtIndex:(unsigned long long)arg1;

@end
