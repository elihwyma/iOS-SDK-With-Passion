/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSRegularExpression, NSString;

@protocol WFPythonHTMLParserDelegate;

__attribute__((visibility("hidden")))
@interface WFPythonHTMLParser : NSObject

{
    long long _currentLineNumber;
    long long _currentOffset;
    id <WFPythonHTMLParserDelegate> _delegate;
    NSRegularExpression *_interestingExpression;
    NSRegularExpression *_incompleteExpression;
    NSRegularExpression *_entityrefExpression;
    NSRegularExpression *_charrefExpression;
    NSRegularExpression *_startTagOpenExpression;
    NSRegularExpression *_commentCloseExpression;
    NSRegularExpression *_tagFindExpression;
    NSRegularExpression *_attributeFindExpression;
    NSRegularExpression *_locateStartTagEndExpression;
    NSRegularExpression *_endEndTagExpression;
    NSRegularExpression *_endTagFindExpression;
    NSString *_rawData;
    NSString *_cdataElement;
}

@property (retain, nonatomic) NSRegularExpression *interestingExpression;
@property (nonatomic, readonly) NSRegularExpression *incompleteExpression;
@property (nonatomic, readonly) NSRegularExpression *entityrefExpression;
@property (nonatomic, readonly) NSRegularExpression *charrefExpression;
@property (nonatomic, readonly) NSRegularExpression *startTagOpenExpression;
@property (nonatomic, readonly) NSRegularExpression *commentCloseExpression;
@property (nonatomic, readonly) NSRegularExpression *tagFindExpression;
@property (nonatomic, readonly) NSRegularExpression *attributeFindExpression;
@property (nonatomic, readonly) NSRegularExpression *locateStartTagEndExpression;
@property (nonatomic, readonly) NSRegularExpression *endEndTagExpression;
@property (nonatomic, readonly) NSRegularExpression *endTagFindExpression;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *cdataElement;
@property (nonatomic) long long currentLineNumber;
@property (nonatomic) long long currentOffset;
@property (weak, nonatomic) id <WFPythonHTMLParserDelegate> delegate;

- (id)init;
- (void)close;
- (void)reset;
- (void)handleData:(id)arg1;
- (void)feed:(id)arg1;
- (void)parseDataAndEnd:(_Bool)arg1;
- (id)scanName:(long long)arg1 declarationStartPosition:(long long)arg2 location:(long long *)arg3;
- (long long)parseMarkedSection:(long long)arg1;
- (long long)parseComment:(long long)arg1;
- (long long)parseHTMLDeclaration:(long long)arg1;
- (long long)parseBogusComment:(long long)arg1;
- (long long)parseProcessingInstruction:(long long)arg1;
- (long long)parseStartTag:(long long)arg1;
- (long long)checkForWholeStartTag:(long long)arg1;
- (long long)parseEndTag:(long long)arg1;
- (long long)updatePosition:(long long)arg1 j:(long long)arg2;
- (void)handleStartEndTag:(id)arg1 attributes:(id)arg2;
- (void)handleStartTag:(id)arg1 attributes:(id)arg2;
- (void)handleEndTag:(id)arg1;
- (void)handleEntityRef:(id)arg1;
- (void)handleCharacterRef:(id)arg1;
- (void)handleComment:(id)arg1;
- (void)handleDoctypeDeclaration:(id)arg1;
- (void)handleProcessingInstruction:(id)arg1;
- (void)handleUnknownDeclaration:(id)arg1;

@end
