/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCPseudoOperation : NSObject

{
    long long _relativePriority;
    CDUnknownBlockType _cancelBlock;
    NSString *_shortOperationDescription;
    NSString *_longOperationDescription;
    CDUnknownBlockType _priorityBlock;
}

@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (copy, nonatomic) NSString *shortOperationDescription;
@property (copy, nonatomic) NSString *longOperationDescription;
@property (copy, nonatomic) CDUnknownBlockType priorityBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (id)init;
- (void)cancel;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 priorityBlock:(CDUnknownBlockType)arg2 shortDescription:(id)arg3 longDescription:(id)arg4;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 priorityBlock:(CDUnknownBlockType)arg2;

@end
