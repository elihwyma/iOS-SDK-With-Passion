/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKLexicalEntity : NSObject

{
    NSString *_string;
    NSString *_tokenType;
    NSString *_partOfSpeech;
    NSString *_lemma;
    NSString *_language;
    NSString *_internalWord;
    struct _NSRange _tokenRange;
}

@property (retain) NSString *internalWord;
@property (retain) NSString *string;
@property (retain) NSString *tokenType;
@property (retain) NSString *partOfSpeech;
@property (retain) NSString *lemma;
@property (retain) NSString *language;
@property struct _NSRange tokenRange;
@property (readonly) NSString *word;

- (id)description;

@end
