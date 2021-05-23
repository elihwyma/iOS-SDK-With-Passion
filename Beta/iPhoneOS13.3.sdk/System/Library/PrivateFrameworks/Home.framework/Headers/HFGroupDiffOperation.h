/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol HFDiffableItemGroup;

@interface HFGroupDiffOperation : NSObject

{
    unsigned long long _type;
    id <HFDiffableItemGroup> _group;
    NSNumber *_fromIndex;
    NSNumber *_toIndex;
}

@property (nonatomic, readonly) id <HFDiffableItemGroup> group;
@property (copy, nonatomic, readonly) NSNumber *fromIndex;
@property (copy, nonatomic, readonly) NSNumber *toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *operationDescription;

+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;

@end
