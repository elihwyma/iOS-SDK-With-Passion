/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol SCROBrailleDisplayCommandDispatcherDelegate;

@interface SCROBrailleDisplayCommandDispatcher : NSObject

{
    NSDictionary *_commandDictionary;
    id <SCROBrailleDisplayCommandDispatcherDelegate> delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SCROBrailleDisplayCommandDispatcherDelegate> delegate;

- (id)init;
- (void)_handlePanLeftEvent:(id)arg1;
- (void)_handlePanRightEvent:(id)arg1;
- (void)_handleMoveLeftEvent:(id)arg1;
- (void)_handleMoveRightEvent:(id)arg1;
- (void)_handleRouterEvent:(id)arg1;
- (void)_handleDeleteEvent:(id)arg1;
- (void)_handleEscapeEvent:(id)arg1;
- (void)_handleReturnEvent:(id)arg1;
- (void)_handleTranslateEvent:(id)arg1;
- (void)_handleToggleContractedBrailleEvent:(id)arg1;
- (void)_handleToggleEightDotBrailleEvent:(id)arg1;
- (void)_handleUnsupportedEvent:(id)arg1;
- (_Bool)handleBrailleKeyEvent:(id)arg1;
- (void)_handleForwardDeleteEvent:(id)arg1;

@end
