/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRunActionEvent : PBCodable <Swift>

{
    NSString *_actionIdentifier;
    NSString *_key;
    NSString *_runSource;
    int _source;
    _Bool _completed;
    struct {
        unsigned int source:1;
        unsigned int completed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic, readonly) _Bool hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (nonatomic) _Bool hasCompleted;
@property (nonatomic) _Bool completed;
@property (nonatomic, readonly) _Bool hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;

@end
