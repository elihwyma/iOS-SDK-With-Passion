/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable

{
    double _currentPosition;
    double _pedestrianTraceStartRelativeTimestamp;
    double _traceDuration;
    NSMutableArray *_bookmarks;
    int _eventType;
    NSString *_pedestrianTracePath;
    unsigned int _recordedBookmarkID;
    NSString *_tracePath;
    struct {
        unsigned int currentPosition:1;
        unsigned int pedestrianTraceStartRelativeTimestamp:1;
        unsigned int traceDuration:1;
        unsigned int eventType:1;
        unsigned int recordedBookmarkID:1;
    } _has;
}

@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) _Bool hasTracePath;
@property (retain, nonatomic) NSString *tracePath;
@property (nonatomic) _Bool hasTraceDuration;
@property (nonatomic) double traceDuration;
@property (nonatomic) _Bool hasCurrentPosition;
@property (nonatomic) double currentPosition;
@property (retain, nonatomic) NSMutableArray *bookmarks;
@property (nonatomic) _Bool hasRecordedBookmarkID;
@property (nonatomic) unsigned int recordedBookmarkID;
@property (nonatomic, readonly) _Bool hasPedestrianTracePath;
@property (retain, nonatomic) NSString *pedestrianTracePath;
@property (nonatomic) _Bool hasPedestrianTraceStartRelativeTimestamp;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;

+ (Class)bookmarkType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
- (int)StringAsEventType:(id)arg1;
- (void)addBookmark:(id)arg1;
- (unsigned long long)bookmarksCount;
- (void)clearBookmarks;
- (id)bookmarkAtIndex:(unsigned long long)arg1;

@end
