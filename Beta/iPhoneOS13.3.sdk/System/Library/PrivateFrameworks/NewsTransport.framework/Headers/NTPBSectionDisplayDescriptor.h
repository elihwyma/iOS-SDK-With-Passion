/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable

{
    NSString *_actionTitle;
    NSString *_actionURLString;
    NSString *_backgroundGradientColor;
    NSData *_discoverMoreVideosInfoData;
    NSString *_name;
    NSString *_nameColor;
    _Bool _displaysAsVideoPlaylist;
    _Bool _useNameColorInWidget;
    _Bool _videoPlaysMutedByDefault;
    struct {
        unsigned int displaysAsVideoPlaylist:1;
        unsigned int useNameColorInWidget:1;
        unsigned int videoPlaysMutedByDefault:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasNameColor;
@property (retain, nonatomic) NSString *nameColor;
@property (nonatomic) _Bool hasDisplaysAsVideoPlaylist;
@property (nonatomic) _Bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) _Bool hasBackgroundGradientColor;
@property (retain, nonatomic) NSString *backgroundGradientColor;
@property (nonatomic) _Bool hasVideoPlaysMutedByDefault;
@property (nonatomic) _Bool videoPlaysMutedByDefault;
@property (nonatomic, readonly) _Bool hasActionTitle;
@property (retain, nonatomic) NSString *actionTitle;
@property (nonatomic, readonly) _Bool hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;
@property (nonatomic) _Bool hasUseNameColorInWidget;
@property (nonatomic) _Bool useNameColorInWidget;
@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosInfoData;
@property (retain, nonatomic) NSData *discoverMoreVideosInfoData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
