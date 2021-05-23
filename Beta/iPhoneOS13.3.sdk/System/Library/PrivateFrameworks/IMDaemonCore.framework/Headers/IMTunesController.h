/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMTunesController : NSObject

{
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

@property (nonatomic) NSMutableDictionary *playerInfo;
@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) NSString *messageFormat;

+ (id)sharedTunesController;

- (id)init;
- (void)dealloc;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_updateMessage;
- (void)_playerChanged:(id)arg1;
- (void)_playerChangedNotification:(id)arg1;

@end
