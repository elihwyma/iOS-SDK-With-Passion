/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBImage;

@interface _SFPBSportsTeam : PBCodable <Swift>

{
    _SFPBImage *_logo;
    NSString *_record;
    NSString *_score;
    NSString *_accessibilityDescription;
    NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
