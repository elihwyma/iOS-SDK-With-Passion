/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject

{
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)resetState;
- (void)enqueuePluginViewForReuse:(id)arg1;
- (_Bool)_objectSupportsPluginViewReuse:(id)arg1;
- (void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2;
- (id)_pointerKeyForPluginView:(id)arg1;
- (id)dequeuePluginViewForBalloonController:(id)arg1;

@end
