/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/Swift-Protocol.h>

@class BRLTBrailleStateManager, NSAttributedString, NSString;

@protocol BRLTBrailleStateManagerDelegate;

@interface SCROBrailleFormatter : NSObject <Swift>

{
    _Bool _outputShowEightDot;
    _Bool _inputShowEightDot;
    _Bool _showDotsSevenAndEight;
    _Bool _currentUnread;
    _Bool _anyUnread;
    int _lineFocus;
    int _outputContractionMode;
    int _inputContractionMode;
    int _displayMode;
    id _appToken;
    long long _lineOffset;
    NSAttributedString *_statusText;
    BRLTBrailleStateManager *_stateManager;
    long long _firstToken;
    long long _lastToken;
    unsigned long long _generationID;
    id <BRLTBrailleStateManagerDelegate> _outputDelegate;
}

@property (nonatomic) int lineFocus;
@property (nonatomic, readonly) int outputContractionMode;
@property (nonatomic, readonly) int inputContractionMode;
@property (nonatomic, readonly) _Bool outputShowEightDot;
@property (nonatomic, readonly) _Bool inputShowEightDot;
@property (nonatomic, readonly) _Bool showDotsSevenAndEight;
@property (nonatomic) int displayMode;
@property (nonatomic) _Bool currentUnread;
@property (nonatomic) _Bool anyUnread;
@property (retain, nonatomic) id appToken;
@property (nonatomic) long long lineOffset;
@property (retain, nonatomic) NSAttributedString *statusText;
@property (nonatomic, readonly) BRLTBrailleStateManager *stateManager;
@property (nonatomic, readonly) long long firstToken;
@property (nonatomic, readonly) long long lastToken;
@property (nonatomic, readonly) unsigned long long generationID;
@property (weak, nonatomic) id <BRLTBrailleStateManagerDelegate> outputDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)resetEditingManager;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (void)translate;
- (void)translate:(_Bool)arg1;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(struct _NSRange)arg2;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (void)scriptSelectionDidChange:(struct _NSRange)arg1;
- (void)replaceScriptStringRange:(struct _NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
- (void)didInsertScriptString:(id)arg1;
- (void)addText:(id)arg1 selection:(struct _NSRange *)arg2 token:(long long)arg3 focus:(struct _NSRange *)arg4 isEditableText:(_Bool)arg5;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange *)arg4 token:(long long)arg5 focus:(struct _NSRange *)arg6 technical:(_Bool)arg7 isEditableText:(_Bool)arg8 paddingRange:(struct _NSRange)arg9 editingString:(id)arg10;
- (id)initWithOutputContractionMode:(int)arg1 inputContractionMode:(int)arg2 outputShowEightDot:(_Bool)arg3 inputShowEightDot:(_Bool)arg4 showDotsSevenAndEight:(_Bool)arg5;
- (void)addText:(id)arg1 selection:(struct _NSRange *)arg2 token:(long long)arg3 focus:(struct _NSRange *)arg4 technical:(_Bool)arg5 isEditableText:(_Bool)arg6;
- (struct _NSRange)rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 focus:(struct _NSRange *)arg5 isEditableText:(_Bool)arg6;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange *)arg4 token:(long long)arg5 focus:(struct _NSRange *)arg6 technical:(_Bool)arg7 isEditableText:(_Bool)arg8;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 focus:(struct _NSRange *)arg5 technical:(_Bool)arg6 isEditableText:(_Bool)arg7;

@end
