/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VOSOutputEvent : NSObject

{
    NSString *_rawValue;
    _Bool _supportsSoundEffect;
    _Bool _supportsHaptic;
}

@property (nonatomic) _Bool supportsSoundEffect;
@property (nonatomic) _Bool supportsHaptic;
@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)DidActivateElement;
+ (id)NoResultsFound;
+ (id)BoundaryEncountered;
+ (id)DidFocusOnElement;
+ (id)DidReorderItem;
+ (id)UnknownCommand;
+ (id)DidWrapBackwards;
+ (id)DidWrapForwards;
+ (id)DidScrollByPage;
+ (id)DidBeginPassthrough;
+ (id)DidSelectAutofill;
+ (id)DidSelectPreviousRotor;
+ (id)DidSelectNextRotor;
+ (id)PreviousRotorProgress;
+ (id)NextRotorProgress;
+ (id)DidEnterTouchContainer;
+ (id)DidEnterSecureText;
+ (id)DidEnterTargetArea;
+ (id)DidLeaveTargetArea;
+ (id)DidSyncWithSystemFocus;
+ (id)DidChangeTextSelectionDirection;
+ (id)WillSpeakDetectedText;
+ (id)AlertDidAppear;
+ (id)PopoverDidAppear;
+ (id)ScreenDidChange;
+ (id)ItemIsLoading;
+ (id)ItemDidLoad;
+ (id)ScreenDidTurnOff;
+ (id)CollaborationOccurred;
+ (id)InsertionPointDidMove;
+ (id)AutofillDidAppear;
+ (id)AutofillDidDismiss;
+ (id)FolderWillOpen;
+ (id)FolderDidOpen;
+ (id)FolderDidClose;
+ (id)KeyboardAppeared;
+ (id)KeyboardDisappeared;
+ (id)BrailleDisplayConnected;
+ (id)BrailleDisplayDisconnected;
+ (id)ItemMemorizationSucceeded;
+ (id)ItemMemorizationFailed;
+ (id)ItemMemorizationInProgress;
+ (id)DockDidAppear;
+ (id)DockDidDisappear;
+ (id)ReachabilityDidBegin;
+ (id)ReachabilityDidEnd;
+ (id)NoItemExists;
+ (id)DidChangeVolume;
+ (id)DidEnableQuickNav;
+ (id)DidDisableQuickNav;
+ (id)allOutputEvents;
+ (id)eventWithStringValue:(id)arg1;

- (id)description;
- (id)_initOutputEventWithRawValue:(id)arg1 supportsSoundEffect:(_Bool)arg2 supportsHaptic:(_Bool)arg3;

@end
