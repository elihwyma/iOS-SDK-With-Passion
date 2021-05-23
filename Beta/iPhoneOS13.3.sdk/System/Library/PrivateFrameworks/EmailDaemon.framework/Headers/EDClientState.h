/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EDClientState : NSObject

{
    _Bool _isForeground;
    NSArray *_visibleMailboxesObjectIds;
}

@property (nonatomic, readonly) NSArray *visibleMailboxesObjectIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isForeground;

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (void)dealloc;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)setClientIsInForeground:(_Bool)arg1;
- (id)giveBoostWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
