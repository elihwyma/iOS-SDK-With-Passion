/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBImage;

@interface _SFPBMediaOffer : PBCodable <Swift>

{
    _Bool _isEnabled;
    _SFPBActionItem *_actionItem;
    NSString *_sublabel;
    NSString *_offerIdentifier;
    _SFPBImage *_image;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBActionItem *actionItem;
@property (copy, nonatomic) NSString *sublabel;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic) _Bool isEnabled;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
