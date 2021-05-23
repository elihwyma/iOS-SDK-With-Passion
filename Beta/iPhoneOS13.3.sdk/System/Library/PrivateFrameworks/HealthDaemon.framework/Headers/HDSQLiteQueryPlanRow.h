/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDSQLiteQueryPlanRow : NSObject

{
    long long _selectID;
    long long _order;
    long long _from;
    NSString *_detail;
}

@property (nonatomic, readonly) long long selectID;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) long long from;
@property (copy, nonatomic, readonly) NSString *detail;

- (id)description;
- (id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4;

@end
