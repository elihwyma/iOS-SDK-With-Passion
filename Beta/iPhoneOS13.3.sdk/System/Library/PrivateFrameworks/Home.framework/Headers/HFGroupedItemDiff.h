/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HFGroupedItemDiff : NSObject

{
    NSArray *_groupOperations;
    NSArray *_itemOperations;
    NSArray *_fromGroups;
    NSArray *_toGroups;
    CDUnknownBlockType _changeTest;
}

@property (copy, nonatomic) NSArray *fromGroups;
@property (copy, nonatomic) NSArray *toGroups;
@property (copy, nonatomic) CDUnknownBlockType changeTest;
@property (copy, nonatomic) NSArray *groupOperations;
@property (copy, nonatomic) NSArray *itemOperations;
@property (copy, nonatomic, readonly) NSArray *allOperations;
@property (copy, nonatomic, readonly) NSString *operationDescription;

+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(CDUnknownBlockType)arg3;
+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2;

- (id)description;
- (id)debugDescription;
- (id)initWithFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(CDUnknownBlockType)arg3;
- (void)_performDiff;
- (id)_performItemDiffFromGroup:(id)arg1 atIndex:(id)arg2 toGroup:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)_briefDescriptionForOperations:(id)arg1 type:(id)arg2;
- (id)_operationDescriptionWithPrefix:(id)arg1;

@end
