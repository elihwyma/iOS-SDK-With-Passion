/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EFObservable, EMRemoteConnection, NSString;

@protocol EFObserver;

@interface EMClientState : NSObject

{
    _Bool _isForeground;
    EFObservable<EFObserver> *_foregroundObservable;
    EMRemoteConnection *_connection;
}

@property (retain) EMRemoteConnection *connection;
@property (nonatomic) _Bool isForeground;
@property (retain, nonatomic) EFObservable<EFObserver> *foregroundObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;

- (id)initWithRemoteConnection:(id)arg1;
- (void)_updateRemoteInterface;
- (void)_handleApplicationWillEnterForeground;
- (void)_handleApplicationDidEnterBackground;
- (void)setCurrentlyVisibleMailboxes:(id)arg1;
- (id)daemonBoosterWithDescription:(id)arg1;

@end
