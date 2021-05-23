/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class ICURLRequest, NSString;

@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject

{
    int _defaultsDidChangeToken;
    ICURLRequest *_groupIDRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) ICURLRequest *groupIDRequest;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;

+ (id)defaultStore;

- (id)init;
- (void)dealloc;
- (void)clearCaches;
- (void)determineGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearGroupID;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canDetermineGroupID;
- (void)clearAllCredentials;

@end
