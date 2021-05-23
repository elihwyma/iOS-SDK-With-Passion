/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccountCredential : PBCodable

{
    NSMutableArray *_credentialItems;
    NSString *_credentialType;
    NSMutableArray *_dirtyProperties;
    _Bool _requiresTouchID;
}

@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSMutableArray *credentialItems;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (nonatomic) _Bool requiresTouchID;

+ (Class)dirtyPropertiesType;
+ (Class)credentialItemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDirtyProperties;
- (void)addDirtyProperties:(id)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (void)clearCredentialItems;
- (void)addCredentialItems:(id)arg1;
- (unsigned long long)credentialItemsCount;
- (id)credentialItemsAtIndex:(unsigned long long)arg1;

@end
