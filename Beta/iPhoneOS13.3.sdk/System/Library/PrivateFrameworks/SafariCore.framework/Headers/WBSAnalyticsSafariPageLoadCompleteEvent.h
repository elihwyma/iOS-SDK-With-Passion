/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable

{
    unsigned long long _configurationID;
    long long _errorCode;
    unsigned long long _pageID;
    unsigned long long _pageLoadTime;
    unsigned long long _timestamp;
    struct {
        unsigned int configurationID:1;
        unsigned int errorCode:1;
        unsigned int pageID:1;
        unsigned int pageLoadTime:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasConfigurationID;
@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) _Bool hasPageID;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) _Bool hasPageLoadTime;
@property (nonatomic) unsigned long long pageLoadTime;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;

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
