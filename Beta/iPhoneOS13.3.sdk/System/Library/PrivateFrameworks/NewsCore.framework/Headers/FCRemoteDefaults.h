/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCThreadSafeMutableDictionary;

@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

{
    id <FCBackgroundTaskable> _backgroundTaskable;
    FCThreadSafeMutableDictionary *_remoteDefaults;
}

@property (weak, nonatomic, readonly) id <FCBackgroundTaskable> backgroundTaskable;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)init;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (_Bool)isAvailable;
- (id)URLRequest;
- (void)checkForUpdate;
- (id)initWithBackgroundTaskable:(id)arg1;
- (void)updateRemoteDefaults;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;

@end
