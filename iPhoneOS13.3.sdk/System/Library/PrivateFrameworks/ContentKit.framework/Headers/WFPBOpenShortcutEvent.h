//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBOpenShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    int _source;
    CDStruct_fce072d8 _has;
}

@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(readonly, nonatomic) BOOL hasGalleryIdentifier;
@property(readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property(nonatomic) BOOL hasActionCount;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) BOOL hasKey;

@end

