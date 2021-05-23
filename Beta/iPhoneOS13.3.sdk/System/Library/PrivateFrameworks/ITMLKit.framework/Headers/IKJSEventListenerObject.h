/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <Swift>

{
    NSMutableDictionary *_eventListenersMap;
}

@property (retain, nonatomic) NSMutableDictionary *eventListenersMap;

- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
- (_Bool)invokeListeners:(id)arg1 extraInfo:(id)arg2;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (id)_eventInformationForType:(id)arg1 extraInfo:(id)arg2;
- (_Bool)invokeSingleListener:(id)arg1 extraInfo:(id)arg2 return:(id *)arg3;
- (_Bool)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(_Bool)arg3;
- (_Bool)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4;

@end
