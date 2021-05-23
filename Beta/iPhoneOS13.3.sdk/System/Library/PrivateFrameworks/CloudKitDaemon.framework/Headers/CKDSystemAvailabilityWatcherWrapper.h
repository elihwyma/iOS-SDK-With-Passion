/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CKDSystemAvailabilityWatcher;

__attribute__((visibility("hidden")))
@interface CKDSystemAvailabilityWatcherWrapper : NSObject

{
    id <CKDSystemAvailabilityWatcher> _delegate;
    NSString *_personaID;
}

@property (weak, nonatomic) id <CKDSystemAvailabilityWatcher> delegate;
@property (copy, nonatomic) NSString *personaID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDelegate:(id)arg1;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;

@end
