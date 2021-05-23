/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKContainer, IDSCloudKitGroupServer, IDSCloudKitKeyElectionStore, IDSCloudKitKeyValueStore, IDSCloudKitTransportLog, NSString;

@protocol OS_dispatch_queue;

@interface IDSCloudKitContainer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKContainer *_container;
    IDSCloudKitKeyValueStore *_keyValueStore;
    IDSCloudKitGroupServer *_publicGroupServer;
    IDSCloudKitGroupServer *_privateGroupServer;
    IDSCloudKitTransportLog *_transportLog;
    IDSCloudKitKeyElectionStore *_keyElectionStore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKContainer *container;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) IDSCloudKitKeyValueStore *keyValueStore;
@property (nonatomic, readonly) IDSCloudKitGroupServer *publicGroupServer;
@property (nonatomic, readonly) IDSCloudKitGroupServer *privateGroupServer;
@property (nonatomic, readonly) IDSCloudKitTransportLog *transportLog;
@property (nonatomic, readonly) IDSCloudKitKeyElectionStore *keyElectionStore;

- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;

@end
