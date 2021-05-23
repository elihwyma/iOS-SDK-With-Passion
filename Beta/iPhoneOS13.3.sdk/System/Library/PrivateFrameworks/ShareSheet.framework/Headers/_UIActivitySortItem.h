/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class UIActivity;

@interface _UIActivitySortItem : NSObject

{
    UIActivity *_activity;
    long long _group;
    id _secondarySortValue;
    id _tertiarySortValue;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, readonly) long long group;
@property (nonatomic, readonly) id secondarySortValue;
@property (nonatomic, readonly) id tertiarySortValue;

+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3;
+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4;

- (id)debugDescription;
- (long long)compare:(id)arg1;

@end
