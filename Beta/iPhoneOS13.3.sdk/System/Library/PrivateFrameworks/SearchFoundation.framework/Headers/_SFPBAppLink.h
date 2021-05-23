/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBImage, _SFPBPunchout;

@interface _SFPBAppLink : PBCodable <Swift>

{
    int _imageAlign;
    NSString *_title;
    _SFPBPunchout *_appPunchout;
    _SFPBImage *_image;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBPunchout *appPunchout;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
