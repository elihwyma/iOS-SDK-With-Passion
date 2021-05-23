/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBPointSize : PBCodable <Swift>

{
    _SFPBGraphicalFloat *_width;
    _SFPBGraphicalFloat *_height;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBGraphicalFloat *width;
@property (retain, nonatomic) _SFPBGraphicalFloat *height;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithCGSize:(struct CGSize)arg1;
- (id)initWithJSON:(id)arg1;

@end
