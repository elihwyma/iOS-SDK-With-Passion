/*
 Image: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection;

@protocol OS_dispatch_queue;

@interface IDSHashPersistenceAWDLogging : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (_Bool)shouldSubmit;
- (void)duplicateMessageEncounted;

@end
