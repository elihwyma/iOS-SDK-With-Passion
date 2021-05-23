/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer, _TVRCMRTelevisionWrapper;

@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject

{
    _TVRCMRTelevisionWrapper *_television;
    id <_TVRCMediaRemoteKeyboardAdapterDelegate> _delegate;
    NSString *_text;
    NSMutableArray *_typedStringsAwaitingAcknowledgement;
    NSTimer *_acknowledgementTimer;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *typedStringsAwaitingAcknowledgement;
@property (weak, nonatomic) NSTimer *acknowledgementTimer;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (weak, nonatomic) id <_TVRCMediaRemoteKeyboardAdapterDelegate> delegate;

- (id)init;
- (void)sessionEnded;
- (void)userEnteredText:(id)arg1;
- (void)sessionBeganWithInitialText:(id)arg1;
- (void)receivedRemotelyUpdatedText:(id)arg1;
- (void)_acknowledgementTimerExpired:(id)arg1;
- (void)_resetTextValueToSessionValue;

@end
