/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSError, NSSet;

@interface HMBCloudZoneRecordPushResult : HMFObject

{
    _Bool _fatalError;
    NSSet *_updated;
    NSSet *_deleted;
    NSDictionary *_partialErrors;
    NSDictionary *_conflicts;
    NSError *_error;
}

@property (nonatomic, readonly) NSSet *updated;
@property (nonatomic, readonly) NSSet *deleted;
@property (nonatomic, readonly) NSDictionary *partialErrors;
@property (nonatomic, readonly) NSDictionary *conflicts;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool fatalError;

+ (id)pushResultByMergingPushResult:(id)arg1 withPushResult:(id)arg2;

- (id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 error:(id)arg4;
- (id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 partialErrors:(id)arg4 fatalError:(_Bool)arg5 error:(id)arg6;

@end
