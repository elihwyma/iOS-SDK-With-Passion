/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@interface SiriActivationSource : NSObject

{
    BSServiceConnection *_connection;
    struct os_unfair_lock_s _lock;
    _Bool _active;
    _Bool _knowsIfActive;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)isActive;
- (_Bool)isEnabled;
- (oneway void)activeChangedTo:(id)arg1;

@end
