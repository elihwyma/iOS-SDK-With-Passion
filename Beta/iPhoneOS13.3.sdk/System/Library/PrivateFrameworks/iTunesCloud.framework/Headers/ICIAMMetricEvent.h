/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface ICIAMMetricEvent : PBCodable <Swift>

{
    NSMutableArray *_actionDetails;
    int _actionType;
    NSString *_actionURL;
    NSString *_eventType;
    NSMutableArray *_pageDetails;
    NSString *_pageId;
    int _pageType;
    NSString *_pageUrl;
    NSString *_targetId;
    int _targetType;
    struct {
        unsigned int actionType:1;
        unsigned int pageType:1;
        unsigned int targetType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPageId;
@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) _Bool hasPageType;
@property (nonatomic) int pageType;
@property (retain, nonatomic) NSMutableArray *pageDetails;
@property (nonatomic, readonly) _Bool hasTargetId;
@property (retain, nonatomic) NSString *targetId;
@property (nonatomic) _Bool hasTargetType;
@property (nonatomic) int targetType;
@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic, readonly) _Bool hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (retain, nonatomic) NSMutableArray *actionDetails;
@property (nonatomic, readonly) _Bool hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (nonatomic, readonly) _Bool hasPageUrl;
@property (retain, nonatomic) NSString *pageUrl;

+ (Class)pageDetailsType;
+ (Class)actionDetailsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;
- (void)addPageDetails:(id)arg1;
- (void)addActionDetails:(id)arg1;
- (unsigned long long)pageDetailsCount;
- (void)clearPageDetails;
- (id)pageDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionDetailsCount;
- (void)clearActionDetails;
- (id)actionDetailsAtIndex:(unsigned long long)arg1;
- (id)pageTypeAsString:(int)arg1;
- (int)StringAsPageType:(id)arg1;
- (id)targetTypeAsString:(int)arg1;
- (int)StringAsTargetType:(id)arg1;

@end
