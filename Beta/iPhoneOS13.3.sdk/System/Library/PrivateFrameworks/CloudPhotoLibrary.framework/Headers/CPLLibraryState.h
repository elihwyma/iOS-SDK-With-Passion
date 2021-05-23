/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate;

@interface CPLLibraryState : NSObject

{
    _Bool _disabled;
    NSDate *_disabledDate;
    NSDate *_deleteDate;
}

@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (copy, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSDate *deleteDate;

@end
