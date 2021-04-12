//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDHomeKitCameraRecordingClipNotification : PBCodable <NSCopying>
{
    NSUInteger _duration;
    NSUInteger _recordingEventTriggers;
    NSUInteger _sequenceNumber;
    NSUInteger _timestamp;
    NSString *_cameraUUID;
    NSString *_sessionUUID;
    struct {
        unsigned int duration:1;
        unsigned int recordingEventTriggers:1;
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) NSUInteger sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) NSUInteger recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSString *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasRecordingEventTriggers;
@property(readonly, nonatomic) BOOL hasSessionUUID;
@property(readonly, nonatomic) BOOL hasCameraUUID;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasTimestamp;

@end

