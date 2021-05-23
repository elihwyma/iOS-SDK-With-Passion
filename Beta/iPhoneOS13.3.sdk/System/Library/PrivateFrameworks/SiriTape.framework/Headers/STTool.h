/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@interface STTool : NSObject

+ (id)settingsConnection;
+ (void)createProxyIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;
+ (void)clearCFcache;

@end
