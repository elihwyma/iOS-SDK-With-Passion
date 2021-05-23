/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBURL;

@interface _SFPBTrack : PBCodable <Swift>

{
    _Bool _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    _SFPBURL *_preview;
    _SFPBActionItem *_playAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) _SFPBURL *preview;
@property (retain, nonatomic) _SFPBActionItem *playAction;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
