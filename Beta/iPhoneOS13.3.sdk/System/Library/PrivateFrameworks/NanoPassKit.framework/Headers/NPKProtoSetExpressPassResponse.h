/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoSetExpressPassResponse : PBCodable

{
    NSData *_actualExpressPassInformation;
    NSString *_actualUniqueID;
    NSMutableArray *_currentExpressPassesInformations;
    NSMutableArray *_currentUniqueIDs;
    _Bool _cancelled;
    _Bool _needsUnlock;
    _Bool _pending;
    _Bool _success;
    struct {
        unsigned int cancelled:1;
        unsigned int needsUnlock:1;
        unsigned int pending:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasCancelled;
@property (nonatomic) _Bool cancelled;
@property (nonatomic) _Bool hasNeedsUnlock;
@property (nonatomic) _Bool needsUnlock;
@property (nonatomic, readonly) _Bool hasActualUniqueID;
@property (retain, nonatomic) NSString *actualUniqueID;
@property (retain, nonatomic) NSMutableArray *currentUniqueIDs;
@property (nonatomic, readonly) _Bool hasActualExpressPassInformation;
@property (retain, nonatomic) NSData *actualExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations;

+ (Class)currentExpressPassesInformationType;
+ (Class)currentUniqueIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCurrentExpressPassesInformation:(id)arg1;
- (unsigned long long)currentExpressPassesInformationsCount;
- (void)clearCurrentExpressPassesInformations;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)arg1;
- (void)addCurrentUniqueIDs:(id)arg1;
- (unsigned long long)currentUniqueIDsCount;
- (void)clearCurrentUniqueIDs;
- (id)currentUniqueIDsAtIndex:(unsigned long long)arg1;

@end
