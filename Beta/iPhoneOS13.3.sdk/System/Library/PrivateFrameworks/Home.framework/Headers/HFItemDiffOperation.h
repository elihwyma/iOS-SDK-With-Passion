/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface HFItemDiffOperation : NSObject

{
    unsigned long long _type;
    id _item;
    NSIndexPath *_fromIndexPath;
    NSIndexPath *_toIndexPath;
}

@property (nonatomic, readonly) id item;
@property (copy, nonatomic, readonly) NSIndexPath *fromIndexPath;
@property (copy, nonatomic, readonly) NSIndexPath *toIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *operationDescription;

+ (id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
+ (id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;
- (id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end
