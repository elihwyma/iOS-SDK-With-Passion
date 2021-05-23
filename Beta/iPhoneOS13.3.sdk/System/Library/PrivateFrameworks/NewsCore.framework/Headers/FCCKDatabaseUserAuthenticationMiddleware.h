/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject

{
    _Bool _privateDataSyncingEnabled;
}

@property (nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)initWithPrivateDataSyncingEnabled:(_Bool)arg1;

@end
