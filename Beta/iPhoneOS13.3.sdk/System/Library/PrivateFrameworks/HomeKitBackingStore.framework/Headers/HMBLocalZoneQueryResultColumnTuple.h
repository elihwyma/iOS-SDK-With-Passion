/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModelField, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultColumnTuple : HMFObject

{
    int _offset;
    NSString *_name;
    HMBModelField *_modelField;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int offset;
@property (nonatomic, readonly) HMBModelField *modelField;

- (id)description;
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;

@end
