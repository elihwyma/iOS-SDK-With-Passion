/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSData, NSLock, NSMutableAttributedString, SCRCTargetSelectorTimer, SCROConnection;

@interface SCROBrailleClient : NSObject

{
    SCROConnection *_connection;
    NSLock *_lock;
    id _delegate;
    NSMutableAttributedString *_mainStringPending;
    NSMutableAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    SCRCTargetSelectorTimer *_deathTimer;
    _Bool _isReady;
    _Bool _needsDisplay;
    _Bool _keepConnectionAlive;
    _Bool _delegateWantsKeypresses;
    _Bool _delegateWantsReplaceTextRange;
    _Bool _wantsDisconnectMessage;
    _Bool _wantsReconnectMessage;
    _Bool _wantsDisplayConfigurationChanged;
    _Bool _displayDescriptorCallbackEnabled;
}

@property (nonatomic) _Bool inputEightDotBraille;
@property (nonatomic) _Bool wordWrapEnabled;
@property (nonatomic) int inputContractionMode;

+ (void)logBrailleRequests:(_Bool)arg1;
+ (id)statusAttributeDotText;

- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (_Bool)needsDisplay;
- (int)displayMode;
- (void)displayIfNeeded;
- (void)display;
- (_Bool)isConnected;
- (_Bool)isConfigured;
- (void)setTableIdentifier:(id)arg1;
- (Class)connectionClass;
- (void)handleCallback:(id)arg1;
- (void)_deathTimerHandler;
- (id)_lazyConnection;
- (void)_registerDelegate;
- (void)setMainAttributedString:(id)arg1;
- (id)mainAttributedString;
- (id)_getWorkingString;
- (void)_refreshAfterReconnect;
- (void)setDisplayDescriptorCallbackEnabled:(_Bool)arg1;
- (void)_setupDeviceDetection;
- (void)_deviceConnected:(id)arg1;
- (void)setKeepConnectionAlive:(_Bool)arg1;
- (_Bool)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(_Bool)arg1;
- (_Bool)alwaysUsesNemethCodeForTechnicalText;
- (id)driverConfiguration;
- (id)pendingMainAttributedString;
- (void)setAnnouncementString:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAggregatedStatus:(id)arg1;
- (id)pendingAggregatedStatus;
- (id)aggregatedStatus;
- (void)setVirtualStatusAlignment:(int)arg1;
- (int)virtualStatusAlignment;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (long long)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(_Bool)arg1;
- (_Bool)showDotsSevenAndEight;
- (void)setContractionMode:(int)arg1;
- (int)contractionMode;
- (void)setShowEightDotBraille:(_Bool)arg1;
- (_Bool)showEightDotBraille;
- (void)setAutomaticBrailleTranslationEnabled:(_Bool)arg1;
- (_Bool)automaticBrailleTranslationEnabled;
- (unsigned int)persistentKeyModifiers;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)exitCurrentDisplayMode;
- (_Bool)displayDescriptorCallbackEnabled;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long *)arg2 appToken:(id *)arg3 forDisplayWithToken:(int)arg4;
- (id)tokenArray;
- (struct _NSRange)rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;
- (void)setSelection:(struct _NSRange)arg1 forToken:(long long)arg2;
- (void)selectAllForToken:(long long)arg1;
- (void)unselectAllForToken:(long long)arg1;
- (void)setFocused:(_Bool)arg1 forToken:(long long)arg2;
- (void)simulateKeypress:(id)arg1;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (void)setPrepareToMemorizeNextKey:(_Bool)arg1 immediate:(_Bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setSingleLetterInputIsOn:(_Bool)arg1;
- (void)setTextSearchModeIsOn:(_Bool)arg1;
- (void)setBrailleChordDebounceTimeout:(double)arg1;
- (void)translateBrailleToClipboard;

@end
