/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject

{
    NSMutableDictionary *_runningQueries;
}

@property (retain) NSMutableDictionary *_runningQueries;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;

@end
