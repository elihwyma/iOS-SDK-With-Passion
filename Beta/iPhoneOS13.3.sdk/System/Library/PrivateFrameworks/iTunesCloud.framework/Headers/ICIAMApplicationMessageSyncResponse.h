/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <Swift>

{
    NSString *_bundleID;
    NSMutableArray *_syncCommands;
}

@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *syncCommands;

+ (Class)syncCommandsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)syncCommandsCount;
- (id)syncCommandsAtIndex:(unsigned long long)arg1;
- (void)addSyncCommands:(id)arg1;
- (void)clearSyncCommands;

@end
