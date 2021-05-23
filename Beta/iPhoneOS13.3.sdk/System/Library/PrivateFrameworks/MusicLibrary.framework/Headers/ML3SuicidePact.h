/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface ML3SuicidePact : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (nonatomic, readonly) _Bool isSigned;

+ (id)sharedPact;

- (id)init;
- (void)dealloc;
- (void)execute;
- (void)signForReason:(long long)arg1;
- (void)_carryOutSuicidePact;
- (void)secedeForReason:(long long)arg1;
- (_Bool)isSignedForReason:(long long)arg1;

@end
