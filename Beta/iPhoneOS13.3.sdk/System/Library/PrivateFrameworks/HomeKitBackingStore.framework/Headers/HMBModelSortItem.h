/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBModelSortItem : HMFObject

{
    HMBModel *_model;
    NSUUID *_modelID;
    NSUUID *_parentModelID;
    NSMutableSet *_dependentModels;
    unsigned long long _mark;
}

@property (retain, nonatomic) HMBModel *model;
@property (retain, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSUUID *parentModelID;
@property (retain, nonatomic) NSMutableSet *dependentModels;
@property (nonatomic) unsigned long long mark;

- (id)initWithModel:(id)arg1;

@end
