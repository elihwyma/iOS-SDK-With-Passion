/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray, NSString;

@interface ADLogAnalyticsRequest : PBRequest

{
    NSString *_bundleID;
    NSData *_contentiAdID;
    NSData *_dPID;
    NSMutableArray *_events;
    NSData *_iAdID;
}

@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) _Bool hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (nonatomic, readonly) _Bool hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (retain, nonatomic) NSMutableArray *events;

+ (id)options;
+ (Class)eventsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;

@end
