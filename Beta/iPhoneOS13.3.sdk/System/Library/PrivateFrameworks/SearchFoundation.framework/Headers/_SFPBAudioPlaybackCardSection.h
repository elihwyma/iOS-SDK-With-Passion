/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBAudioPlaybackCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    int _separatorStyle;
    int _state;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSArray *_playCommands;
    NSArray *_stopCommands;
    _SFPBRichText *_detailText;
    _SFPBRichText *_title;
    _SFPBRichText *_subtitle;
    _SFPBImage *_thumbnail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) int state;
@property (copy, nonatomic) NSArray *playCommands;
@property (copy, nonatomic) NSArray *stopCommands;
@property (retain, nonatomic) _SFPBRichText *detailText;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBRichText *subtitle;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (void)addPlayCommands:(id)arg1;
- (void)addStopCommands:(id)arg1;
- (void)clearPlayCommands;
- (unsigned long long)playCommandsCount;
- (id)playCommandsAtIndex:(unsigned long long)arg1;
- (void)clearStopCommands;
- (unsigned long long)stopCommandsCount;
- (id)stopCommandsAtIndex:(unsigned long long)arg1;

@end
