/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMMessageRule, ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMApplicationMessage : PBCodable <Swift>

{
    double _endDate;
    double _startDate;
    int _assetPrefetchStrategy;
    NSMutableArray *_contentPages;
    int _globalPresentationPolicyGroup;
    ICIAMMetricEvent *_holdoutEvent;
    NSString *_identifier;
    int _maximumDisplays;
    int _messageType;
    int _modalPresentationStyle;
    int _priority;
    ICIAMMessageRule *_rule;
    NSMutableArray *_targets;
    NSString *_templateURL;
    NSString *_webArchiveURL;
    _Bool _carousel;
    _Bool _hasCloseButton;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int assetPrefetchStrategy:1;
        unsigned int globalPresentationPolicyGroup:1;
        unsigned int maximumDisplays:1;
        unsigned int messageType:1;
        unsigned int modalPresentationStyle:1;
        unsigned int priority:1;
        unsigned int carousel:1;
        unsigned int hasCloseButton:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *targets;
@property (nonatomic) _Bool hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) _Bool hasCarousel;
@property (nonatomic) _Bool carousel;
@property (nonatomic) _Bool hasPriority;
@property (nonatomic) int priority;
@property (nonatomic, readonly) _Bool hasTemplateURL;
@property (retain, nonatomic) NSString *templateURL;
@property (nonatomic) _Bool hasMaximumDisplays;
@property (nonatomic) int maximumDisplays;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) _Bool hasHasCloseButton;
@property (nonatomic) _Bool hasCloseButton;
@property (retain, nonatomic) NSMutableArray *contentPages;
@property (nonatomic, readonly) _Bool hasRule;
@property (retain, nonatomic) ICIAMMessageRule *rule;
@property (nonatomic, readonly) _Bool hasWebArchiveURL;
@property (retain, nonatomic) NSString *webArchiveURL;
@property (nonatomic) _Bool hasModalPresentationStyle;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) _Bool hasGlobalPresentationPolicyGroup;
@property (nonatomic) int globalPresentationPolicyGroup;
@property (nonatomic) _Bool hasAssetPrefetchStrategy;
@property (nonatomic) int assetPrefetchStrategy;
@property (nonatomic, readonly) _Bool hasHoldoutEvent;
@property (retain, nonatomic) ICIAMMetricEvent *holdoutEvent;

+ (Class)targetType;
+ (Class)contentPagesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)addContentPages:(id)arg1;
- (unsigned long long)targetsCount;
- (void)clearTargets;
- (id)targetAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentPagesCount;
- (void)clearContentPages;
- (id)contentPagesAtIndex:(unsigned long long)arg1;
- (id)modalPresentationStyleAsString:(int)arg1;
- (int)StringAsModalPresentationStyle:(id)arg1;
- (id)globalPresentationPolicyGroupAsString:(int)arg1;
- (int)StringAsGlobalPresentationPolicyGroup:(id)arg1;
- (id)assetPrefetchStrategyAsString:(int)arg1;
- (int)StringAsAssetPrefetchStrategy:(id)arg1;

@end
