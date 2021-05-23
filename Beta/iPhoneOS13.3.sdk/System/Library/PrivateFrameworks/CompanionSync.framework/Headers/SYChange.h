/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSData, NSString;

@interface SYChange : PBCodable

{
    unsigned long long _version;
    NSData *_changeData;
    NSString *_objectId;
    NSString *_sequencer;
    int _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *objectId;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly) _Bool hasChangeData;
@property (retain, nonatomic) NSData *changeData;
@property (nonatomic, readonly) _Bool hasSequencer;
@property (retain, nonatomic) NSString *sequencer;

+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2;
- (id)changeObjectWithSerializer:(id)arg1;
- (id)objectForStore:(id)arg1;

@end
