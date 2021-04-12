//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying>
{
    NSString *_minimumOSName;
    NSString *_recordId;
}

@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *minimumOSName; // @synthesize minimumOSName=_minimumOSName;
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
@property(readonly, nonatomic) BOOL hasRecordId;
@property(readonly, nonatomic) BOOL hasMinimumOSName;

@end

