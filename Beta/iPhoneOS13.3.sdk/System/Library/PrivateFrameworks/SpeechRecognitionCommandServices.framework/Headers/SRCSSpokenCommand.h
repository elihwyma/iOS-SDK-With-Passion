/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SRCSCommandRecognizer;

@interface SRCSSpokenCommand : NSObject

{
    NSArray *_strings;
    NSString *_identifier;
    NSDictionary *_recognizedParameters;
    NSMutableDictionary *_languageModelTree;
    id _fstGrammar;
    SRCSCommandRecognizer *_commandRecognizer;
}

@property (readonly) NSString *identifier;
@property (retain) NSDictionary *recognizedParameters;
@property (readonly) NSArray *strings;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithStrings:(id)arg1;
- (id)commandRecognizer;
- (void)setCommandRecognizer:(id)arg1;
- (id)_initWithSpokenCommand:(id)arg1;
- (id)_uniqueCustomCommandIdentifier;
- (void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)arg1;
- (id)languageModelTree;
- (id)fstGrammar;

@end
