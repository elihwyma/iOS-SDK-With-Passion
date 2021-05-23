/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBColor : PBCodable <Swift>

{
    _SFPBGraphicalFloat *_redComponent;
    _SFPBGraphicalFloat *_greenComponent;
    _SFPBGraphicalFloat *_blueComponent;
    _SFPBGraphicalFloat *_alphaComponent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
