/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@protocol AssistantCallbackUIDelegate;

@interface AssistantCallbackController : NSObject

{
    _Bool _saveScanState;
    id _uiDelegate;
    struct AssistantCallbackContext *_callbackContext;
}

@property (retain, nonatomic) id <AssistantCallbackUIDelegate> uiDelegate;

+ (int)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2;
+ (int)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3;
+ (id)keychainPasswordForBaseStation:(id)arg1;
+ (void)keychainPasswordForBaseStation:(id)arg1 delegate:(id)arg2;
+ (int)removeKeychainPasswordForBaseStation:(id)arg1;

- (id)init;
- (void)dealloc;
- (CDUnknownFunctionPointerType)assistantCallback;
- (void)userResponseToJoinNetwork:(int)arg1;
- (void)userResponseToWarning:(int)arg1;
- (void)userResponseToPPPoECredsFailed:(int)arg1;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
- (void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (int)startScanForNetworks:(id)arg1 wifiType:(int)arg2 mergeResults:(_Bool)arg3 maxAge:(unsigned long long)arg4;
- (int)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)joinNetworkDone:(id)arg1;
- (void)scanForNetworksDone:(id)arg1;
- (int)assistantCallback:(struct AssistantCallbackContext *)arg1 withSelector:(int)arg2;

@end
