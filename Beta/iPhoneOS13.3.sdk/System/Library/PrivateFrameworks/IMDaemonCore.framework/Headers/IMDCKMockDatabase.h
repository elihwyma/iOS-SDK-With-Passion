/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

{
    NSDictionary *_identifierToZoneMap;
}

@property (nonatomic, readonly) NSDictionary *identifierToZoneMap;

- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)_zoneManager;
- (id)_zoneIdentifierForOperation:(id)arg1;

@end
