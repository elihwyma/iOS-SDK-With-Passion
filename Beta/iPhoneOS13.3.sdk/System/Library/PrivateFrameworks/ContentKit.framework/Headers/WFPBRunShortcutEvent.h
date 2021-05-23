/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRunShortcutEvent : PBCodable <Swift>

{
    unsigned int _actionCount;
    NSString *_automationType;
    NSString *_key;
    NSString *_runSource;
    int _source;
    _Bool _completed;
    struct {
        unsigned int actionCount:1;
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
@property (nonatomic, readonly) _Bool hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) _Bool hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) _Bool hasCompleted;
@property (nonatomic) _Bool completed;

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
