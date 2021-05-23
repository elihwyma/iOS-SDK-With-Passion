/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

@protocol STStatusDomainData, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisher : NSObject

{
    id <STStatusDomainPublisherServerHandle> _serverHandle;
}

@property (weak, nonatomic, readonly) id <STStatusDomainPublisherServerHandle> serverHandle;
@property (copy, nonatomic) id <STStatusDomainData> data;

+ (unsigned long long)statusDomainName;

- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (void)updateDataWithBlock:(CDUnknownBlockType)arg1;

@end
