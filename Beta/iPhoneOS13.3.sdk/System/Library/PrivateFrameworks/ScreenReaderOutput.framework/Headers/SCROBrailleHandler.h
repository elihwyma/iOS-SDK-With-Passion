/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROHandler.h>

@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler

{
    SCROBrailleDisplayManager *_brailleDisplayManager;
    _Bool _wantsInputCallbacks;
    _Bool _wantsDidDisplayCallbacks;
    struct {
        _Bool didDisplay;
        _Bool keypress;
        _Bool replaceTextRange;
        _Bool keyWillMem;
        _Bool keymem;
        _Bool panLeft;
        _Bool panRight;
        _Bool showPreviousAnnouncement;
        _Bool showNextAnnouncement;
        _Bool configChanged;
        _Bool playDisplayConnectionSound;
        _Bool playBorderHitSound;
        _Bool playCommandNotSupportedSound;
        _Bool bluetoothDisplayLoadFailed;
        _Bool tableLoadFailed;
        _Bool displayModeChanged;
        _Bool copyStringToClipboard;
        _Bool startEditing;
        _Bool insertUntranslatedText;
        _Bool deleteUntranslatedText;
    } _callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)handleBrailleKeypress:(id)arg1;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleDisplayModeChanged:(id)arg1;
- (void)handleBrailleDriverDidLoad;
- (void)configurationDidChange;
- (void)handleBrailleDriverDisconnected;
- (void)handleStartEditing;
- (void)handleCopyStringToClipboard:(id)arg1;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;
- (id)initWithBrailleDisplayManager:(id)arg1;

@end
