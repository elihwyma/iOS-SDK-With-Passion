/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject

{
    id <STStatusDomainServerHandle> _serverHandle;
    CDUnknownBlockType _dataChangedBlock;
}

@property (weak, nonatomic, readonly) id <STStatusDomainServerHandle> serverHandle;
@property (copy, nonatomic) CDUnknownBlockType dataChangedBlock;
@property (copy, nonatomic, readonly) id <STStatusDomainData> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)statusDomainName;

- (id)init;
- (void)dealloc;
- (id)initWithServerHandle:(id)arg1;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)observeDataWithBlock:(CDUnknownBlockType)arg1;

@end
