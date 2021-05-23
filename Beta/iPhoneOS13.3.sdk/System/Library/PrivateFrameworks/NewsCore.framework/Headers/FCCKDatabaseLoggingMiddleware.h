/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject

{
    _Bool _allowNilDesiredKeys;
}

@property (nonatomic) _Bool allowNilDesiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (id)initAllowingNilDesiredKeys:(_Bool)arg1;

@end
