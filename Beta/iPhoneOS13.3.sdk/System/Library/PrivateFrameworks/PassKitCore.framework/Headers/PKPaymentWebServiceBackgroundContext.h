/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceBackgroundContext : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_backgroundTaskRecordsByTaskIdentifier;
    NSMutableDictionary *_backgroundTaskRecordsByRecordName;
}

@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;
@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithArchive:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)archiveAtPath:(id)arg1;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)addBackgroundDownloadRecord:(id)arg1 forRecordName:(id)arg2;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backgroundDownloadRecordForRecordName:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)removeBackgroundDownloadRecordForRecordName:(id)arg1;
- (id)remainingTasks;

@end
