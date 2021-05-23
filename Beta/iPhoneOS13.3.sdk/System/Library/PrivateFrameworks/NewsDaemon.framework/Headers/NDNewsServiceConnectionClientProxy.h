/*
 Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NDNewsServiceClient;

@interface NDNewsServiceConnectionClientProxy : NSObject

{
    id <NDNewsServiceClient> _client;
}

@property (weak, nonatomic) id <NDNewsServiceClient> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)serviceHasNewTodayResults;

@end
