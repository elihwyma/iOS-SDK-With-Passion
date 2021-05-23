/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecentProxyInfo : NSObject

{
    NSString *_processName;
    NSMutableSet *_containerIdentifiers;
    NSDate *_lastSeen;
    unsigned long long _connectionCount;
    NSMutableDictionary *_operationStatisticsByClassName;
}

@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSMutableSet *containerIdentifiers;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (readonly) unsigned long long connectionCount;
@property (nonatomic, readonly) NSMutableDictionary *operationStatisticsByClassName;

- (id)CKStatusReportArray;
- (id)initWithProxy:(id)arg1;
- (void)mergeProxy:(id)arg1;

@end
