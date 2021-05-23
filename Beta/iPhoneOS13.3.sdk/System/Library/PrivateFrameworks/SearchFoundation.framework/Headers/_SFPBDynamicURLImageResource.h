/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBDynamicURLImageResource : PBCodable <Swift>

{
    _Bool _supportsResizing;
    _SFPBGraphicalFloat *_pixelWidth;
    _SFPBGraphicalFloat *_pixelHeight;
    NSString *_formatURL;
    NSArray *_imageOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) _Bool supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addImageOptions:(id)arg1;
- (void)clearImageOptions;
- (unsigned long long)imageOptionsCount;
- (id)imageOptionsAtIndex:(unsigned long long)arg1;

@end
