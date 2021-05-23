/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSectionedDataSourceWaitingCondition : NSObject

{
    CDUnknownBlockType _condition;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType condition;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

@end
