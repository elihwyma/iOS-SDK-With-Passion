/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCROBrailleDisplayInput : NSObject

{
    _Bool _prepareToMemorizeNextKey;
    _Bool _requestPrepareToMemorizeNextKey;
    _Bool _memorizeNextKeyImmediately;
    _Bool _willMemorizeNow;
    _Bool _isQuiet;
    _Bool _newDown;
    _Bool _currentBrailleChordContainsSpacebar;
    _Bool _currentBrailleChordBeganWithSpacebar;
    _Bool _currentBrailleChordContainsNonSpacebarChordableKey;
    _Bool _spacebarIsDown;
    _Bool _skipBrailleKeyboardKeyTranslation;
    unsigned int _routerEvent;
    unsigned int _currentHIDCommand;
    unsigned int _currentBrailleModifiers;
    unsigned int _downBrailleModifiers;
    double _quietSince;
    double _busySince;
    double _nextWillMemorizeNotificationTime;
    double _memorizeNextKeyImmediatelyTimeout;
    struct __CFArray *_currentChord;
    struct __CFSet *_downKeys;
    double _lastBrailleChordTypingTime;
    struct __CFArray *_currentBrailleChord;
    struct __CFSet *_downBrailleDots;
    double _lastBrailleChordPosted;
    double _brailleCharExponentialMovingAverage;
    double _brailleTranslationTimeout;
}

@property (nonatomic) double quietSince;
@property (nonatomic) double busySince;
@property (nonatomic) double nextWillMemorizeNotificationTime;
@property (nonatomic) double memorizeNextKeyImmediatelyTimeout;
@property (nonatomic) _Bool prepareToMemorizeNextKey;
@property (nonatomic) _Bool requestPrepareToMemorizeNextKey;
@property (nonatomic) _Bool memorizeNextKeyImmediately;
@property (nonatomic) _Bool willMemorizeNow;
@property (nonatomic) _Bool isQuiet;
@property (nonatomic) _Bool newDown;
@property (nonatomic) struct __CFArray *currentChord;
@property (nonatomic) struct __CFSet *downKeys;
@property (nonatomic) unsigned int routerEvent;
@property (nonatomic) _Bool currentBrailleChordContainsSpacebar;
@property (nonatomic) _Bool currentBrailleChordBeganWithSpacebar;
@property (nonatomic) _Bool currentBrailleChordContainsNonSpacebarChordableKey;
@property (nonatomic) _Bool spacebarIsDown;
@property (nonatomic) _Bool skipBrailleKeyboardKeyTranslation;
@property (nonatomic) double lastBrailleChordTypingTime;
@property (nonatomic) struct __CFArray *currentBrailleChord;
@property (nonatomic) struct __CFSet *downBrailleDots;
@property (nonatomic) unsigned int currentHIDCommand;
@property (nonatomic) unsigned int currentBrailleModifiers;
@property (nonatomic) unsigned int downBrailleModifiers;
@property (nonatomic) double lastBrailleChordPosted;
@property (nonatomic) double brailleCharExponentialMovingAverage;
@property (nonatomic) double brailleTranslationTimeout;

- (void)dealloc;

@end
