/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

@interface GEOPDFlyover : PBCodable

{
    PBDataReader *_reader;
    struct GEOPDCameraPathFrame *_cameraPaths;
    unsigned long long _cameraPathsCount;
    unsigned long long _cameraPathsSpace;
    struct GEOPDLabelFrame *_labelFrames;
    unsigned long long _labelFramesCount;
    unsigned long long _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _useSplines;
    struct {
        unsigned int has_useSplines:1;
        unsigned int read_cameraPaths:1;
        unsigned int read_labelFrames:1;
        unsigned int read_labels:1;
        unsigned int read_notificationMessages:1;
        unsigned int wrote_cameraPaths:1;
        unsigned int wrote_labelFrames:1;
        unsigned int wrote_labels:1;
        unsigned int wrote_notificationMessages:1;
        unsigned int wrote_useSplines:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long cameraPathsCount;
@property (nonatomic, readonly) struct GEOPDCameraPathFrame *cameraPaths;
@property (nonatomic) _Bool hasUseSplines;
@property (nonatomic) _Bool useSplines;
@property (nonatomic, readonly) unsigned long long labelFramesCount;
@property (nonatomic, readonly) struct GEOPDLabelFrame *labelFrames;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *notificationMessages;

+ (Class)labelType;
+ (_Bool)isValid:(id)arg1;
+ (id)flyoverForPlaceData:(id)arg1;
+ (Class)notificationMessageType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)labelsCount;
- (void)readAll:(_Bool)arg1;
- (id)bestLocalizedAnnouncementMessage;
- (void)_readLabels;
- (void)_addNoFlagsLabel:(id)arg1;
- (void)clearLabels;
- (id)labelAtIndex:(unsigned long long)arg1;
- (void)addLabel:(id)arg1;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)_readCameraPaths;
- (void)_addNoFlagsCameraPath:(struct GEOPDCameraPathFrame)arg1;
- (void)_readLabelFrames;
- (void)_addNoFlagsLabelFrame:(struct GEOPDLabelFrame)arg1;
- (void)_readNotificationMessages;
- (void)_addNoFlagsNotificationMessage:(id)arg1;
- (struct GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1;
- (void)addCameraPath:(struct GEOPDCameraPathFrame)arg1;
- (struct GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1;
- (void)addLabelFrame:(struct GEOPDLabelFrame)arg1;
- (unsigned long long)notificationMessagesCount;
- (void)clearNotificationMessages;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (void)addNotificationMessage:(id)arg1;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame *)arg1 count:(unsigned long long)arg2;
- (void)setLabelFrames:(struct GEOPDLabelFrame *)arg1 count:(unsigned long long)arg2;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;

@end
