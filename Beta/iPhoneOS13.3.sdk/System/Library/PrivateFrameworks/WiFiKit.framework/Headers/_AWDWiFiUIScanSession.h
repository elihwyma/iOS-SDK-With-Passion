/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface _AWDWiFiUIScanSession : PBCodable <Swift>

{
    unsigned long long _timestamp;
    NSMutableArray *_counts;
    unsigned int _duration;
    NSString *_process;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *counts;
@property (nonatomic, readonly) _Bool hasProcess;
@property (retain, nonatomic) NSString *process;

+ (Class)countsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCounts:(id)arg1;
- (unsigned long long)countsCount;
- (void)clearCounts;
- (id)countsAtIndex:(unsigned long long)arg1;

@end
