/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@interface IKDOMEventDispatcher : NSObject

+ (id)sharedInstance;

- (_Bool)dispatchEvent:(id)arg1;
- (_Bool)_runPhase:(long long)arg1 event:(id)arg2 nodeEn:(id)arg3;

@end
