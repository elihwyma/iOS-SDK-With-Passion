/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSetupSuggestedAutomationEvent : PBCodable <Swift>

{
    unsigned int _currentStep;
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
    _Bool _completed;
    struct {
        unsigned int currentStep:1;
        unsigned int completed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) _Bool hasCurrentStep;
@property (nonatomic) unsigned int currentStep;
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
