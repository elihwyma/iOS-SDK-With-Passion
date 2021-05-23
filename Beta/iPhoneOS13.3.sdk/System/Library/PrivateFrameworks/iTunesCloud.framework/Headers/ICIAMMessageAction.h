/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMMessageAction : PBCodable <Swift>

{
    NSMutableArray *_actionParameters;
    ICIAMMetricEvent *_clickEvent;
    NSString *_displayText;
    NSString *_identifier;
    NSString *_uRL;
    _Bool _requiresDelegate;
    struct {
        unsigned int requiresDelegate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (nonatomic, readonly) _Bool hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) _Bool hasRequiresDelegate;
@property (nonatomic) _Bool requiresDelegate;
@property (retain, nonatomic) NSMutableArray *actionParameters;
@property (nonatomic, readonly) _Bool hasClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *clickEvent;

+ (Class)actionParametersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addActionParameters:(id)arg1;
- (unsigned long long)actionParametersCount;
- (void)clearActionParameters;
- (id)actionParametersAtIndex:(unsigned long long)arg1;

@end
