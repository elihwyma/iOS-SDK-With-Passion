/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKDatabase;

@protocol OS_dispatch_queue;

@interface IDSCloudKitTransportLog : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKDatabase *_database;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) IDSCKDatabase *database;

+ (id)_messageFromRecord:(id)arg1;

- (void)fetchChangesSinceToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (id)_recordIDsToFetch;
- (id)_transportRecordZoneID;
- (void)createZone:(CDUnknownBlockType)arg1;
- (void)dropZone:(CDUnknownBlockType)arg1;
- (void)disabled_fetchChangesSinceToken:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
