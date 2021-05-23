/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPCloudContainer, MSPCloudSynchronizer, MSPContainer, NSString;

@interface MSPSynchronizedContainer : NSObject

{
    _Bool _requiresMerge;
    MSPCloudSynchronizer *_synchronizer;
    MSPContainer *_container;
    MSPCloudContainer *_cloudContainer;
}

@property (retain, nonatomic) MSPCloudSynchronizer *synchronizer;
@property (retain, nonatomic) MSPContainer *container;
@property (retain, nonatomic) MSPCloudContainer *cloudContainer;
@property (nonatomic) _Bool requiresMerge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)cloudContainerDidChange:(id)arg1;
- (void)mergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelMergeWithError:(id)arg1;
- (id)initWithContainer:(id)arg1 synchronizer:(id)arg2;
- (void)setRequiresMerge:(_Bool)arg1 withReason:(unsigned long long)arg2;
- (void)prepareCloudWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
