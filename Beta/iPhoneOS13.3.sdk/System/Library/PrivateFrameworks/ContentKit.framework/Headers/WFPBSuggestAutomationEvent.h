/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSuggestAutomationEvent : PBCodable <Swift>

{
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
    _Bool _completed;
    _Bool _interacted;
    struct {
        unsigned int completed:1;
        unsigned int interacted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) _Bool hasInteracted;
@property (nonatomic) _Bool interacted;
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

@end
