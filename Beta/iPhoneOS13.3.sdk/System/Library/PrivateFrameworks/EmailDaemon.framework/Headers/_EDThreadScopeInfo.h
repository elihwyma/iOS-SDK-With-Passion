/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _EDThreadScopeInfo : NSObject

{
    _Bool _needsUpdate;
    long long _databaseID;
    NSDate *_lastViewedDate;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic) _Bool needsUpdate;
@property (retain, nonatomic) NSDate *lastViewedDate;

- (id)description;
- (id)initWithDatabaseID:(long long)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3;

@end
