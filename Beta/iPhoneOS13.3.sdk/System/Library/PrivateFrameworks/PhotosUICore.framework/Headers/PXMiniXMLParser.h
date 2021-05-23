/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject

{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedTagBlock;
    CDUnknownBlockType _parsedEntityBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSScanner *__scanner;
    NSCharacterSet *__syntaxMarkerCharactersSet;
}

@property (nonatomic, readonly) NSScanner *_scanner;
@property (nonatomic, readonly) NSCharacterSet *_syntaxMarkerCharactersSet;
@property (copy, nonatomic) CDUnknownBlockType parsedCharactersBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedTagBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedEntityBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock;

- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;
- (_Bool)_isAtEnd;
- (_Bool)_parseCharacters;
- (_Bool)_parseTag;
- (_Bool)_parseEntity;
- (_Bool)_tryScanningUsingBlock:(CDUnknownBlockType)arg1;

@end
