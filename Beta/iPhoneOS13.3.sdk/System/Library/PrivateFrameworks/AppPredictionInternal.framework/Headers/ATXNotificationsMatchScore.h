/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ATXNotificationsMatchScore : NSObject

{
    NSMutableArray *_values;
}

- (id)init;
- (id)dict;
- (void)combine:(id)arg1;
- (void)set:(unsigned long long)arg1 value:(id)arg2;
- (CDUnknownBlockType)getAggregationBlockForName:(unsigned long long)arg1;
- (id)get:(unsigned long long)arg1;

@end
