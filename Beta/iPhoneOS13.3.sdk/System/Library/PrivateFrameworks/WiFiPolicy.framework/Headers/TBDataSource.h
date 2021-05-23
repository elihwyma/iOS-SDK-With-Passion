/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TBDataSource : NSObject

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)executeFetchRequest:(id)arg1;
- (void)submitAnalyticsEventForFetchRequest:(id)arg1 duration:(double)arg2 error:(id)arg3 resultCount:(long long)arg4;

@end
