/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class BRLTBrailleStateManager, NSAttributedString, NSData, NSMutableArray, NSMutableAttributedString, NSString, SCROBrailleFormatter, SCROBrailleLineVirtualStatus;

@protocol BRLTBrailleStateManagerDelegate, SCROBrailleDriverProtocol;

@interface SCROBrailleLine : NSObject

{
    id <SCROBrailleDriverProtocol> _brailleDriver;
    long long _size;
    long long _statusSize;
    long long _insetSize;
    long long _lineOffset;
    long long _leftInset;
    long long _rightInset;
    long long _masterStatusCellIndex;
    long long _iBeamLocation;
    long long _focusLocation;
    struct _NSRange _focusRange;
    struct _NSRange _selectionRange;
    int _displayMode;
    int _lineFocus;
    _Bool _displayEnabled;
    _Bool _needsDisplayFlush;
    _Bool _needsStatusFlush;
    _Bool _needsFocusFlush;
    _Bool _blink;
    _Bool _currentUnread;
    _Bool _anyUnread;
    _Bool _isPanning;
    _Bool _showDotsSevenAndEight;
    _Bool _brailleChunksAreDirty;
    char *_displayBuffer;
    char *_mainCellsBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    long long _firstToken;
    long long _lastToken;
    SCROBrailleLineVirtualStatus *_virtualStatus;
    BRLTBrailleStateManager *_stateManager;
    SCROBrailleFormatter *_brailleFormatter;
    _Bool _wordWrapEnabled;
    _Bool _isSingleLetterInputOn;
    _Bool _isTextSearchModeOn;
    _Bool _editableFieldInterruptedByAlert;
    unsigned long long _generationID;
    id <BRLTBrailleStateManagerDelegate> _translationDelegate;
    NSMutableArray *_pendingBrailleStringDictionaries;
}

@property (nonatomic, readonly) BRLTBrailleStateManager *stateManager;
@property (retain, nonatomic) NSMutableArray *pendingBrailleStringDictionaries;
@property (nonatomic) _Bool editableFieldInterruptedByAlert;
@property (nonatomic, readonly) _Bool needsDisplayFlush;
@property (nonatomic) _Bool displayEnabled;
@property (nonatomic) _Bool wordWrapEnabled;
@property (nonatomic) _Bool isSingleLetterInputOn;
@property (nonatomic) _Bool isTextSearchModeOn;
@property (nonatomic) long long lineOffset;
@property (nonatomic) unsigned long long generationID;
@property (nonatomic, readonly) _Bool hasEdits;
@property (nonatomic, readonly) _Bool wantsEdits;
@property (weak, nonatomic) id <BRLTBrailleStateManagerDelegate> translationDelegate;
@property (nonatomic, readonly) NSAttributedString *editingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setFormatter:(id)arg1;
- (int)displayMode;
- (void)_flush;
- (_Bool)display;
- (void)setDisplayMode:(int)arg1;
- (void)translate;
- (void)discardEdits;
- (_Bool)panLeft;
- (_Bool)panRight;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(struct _NSRange)arg2;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (void)scriptSelectionDidChange:(struct _NSRange)arg1;
- (void)replaceScriptStringRange:(struct _NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
- (void)didInsertScriptString:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (long long)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(_Bool)arg1;
- (_Bool)showDotsSevenAndEight;
- (id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3;
- (id)newLineDescriptor;
- (long long)tokenForRouterIndex:(long long *)arg1 location:(long long *)arg2 appToken:(id *)arg3;
- (_Bool)anyUnread;
- (_Bool)currentUnread;
- (_Bool)canPanLeft;
- (_Bool)canPanRight;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (void)setRealStatus:(id)arg1;
- (void)setMainSize:(long long)arg1;
- (void)setStatusSize:(long long)arg1;
- (id)translatedBrailleForTableIdentifier:(id)arg1;
- (_Bool)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (id)appToken;
- (long long)firstToken;
- (long long)lastToken;
- (_Bool)moveCursorLeft;
- (_Bool)moveCursorRight;
- (_Bool)moveCursorToRouterIndex:(unsigned long long)arg1 forwardToScreenReader:(out _Bool *)arg2;
- (_Bool)deleteAtCursor;
- (_Bool)forwardDeleteAtCursor;
- (_Bool)getStatusRouterIndex:(long long *)arg1 forRawIndex:(long long)arg2;
- (void)blinker;
- (id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out _Bool *)arg2;
- (id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out _Bool *)arg2;
- (void)setLineFocus:(int)arg1;
- (void)setCurrentUnread:(_Bool)arg1;
- (void)setAnyUnread:(_Bool)arg1;
- (void)setAppToken:(id)arg1;
- (int)lineFocus;
- (void)_updateOffsets;
- (_Bool)_allowInset;
- (_Bool)_insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2 silently:(_Bool)arg3;
- (_Bool)_forwardDeleteAtCursorSilently:(_Bool)arg1;
- (_Bool)_deleteAtCursorSilently:(_Bool)arg1;
- (void)enumerateWordsBetweenCharacters:(id)arg1 text:(id)arg2 inRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_blink:(_Bool)arg1;
- (_Bool)_setMainCells:(const char *)arg1 length:(long long)arg2;
- (void)_flushRealStatus;
- (void)addAttributedStringToLineBuffer:(id)arg1 brailleOffset:(unsigned long long)arg2;
- (void)addAttributedPaddingToLineBuffer:(id)arg1;
- (id)_translatedTextInIsolationForBraille:(id)arg1 contracted:(_Bool)arg2;
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;
- (id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 contracted:(_Bool)arg3;
- (id)_dotDescriptionForBrailleString:(id)arg1;
- (id)_spokenStringForBrailleString:(id)arg1 isDelete:(_Bool)arg2 speakLiterally:(out _Bool *)arg3;
- (id)newLineDescriptorWithoutPadding;
- (long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2;
- (long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2;
- (struct _NSRange)textRangeForBrailleRange:(struct _NSRange)arg1;
- (unsigned long long)bufferIndexForRouterIndex:(unsigned long long)arg1;

@end
