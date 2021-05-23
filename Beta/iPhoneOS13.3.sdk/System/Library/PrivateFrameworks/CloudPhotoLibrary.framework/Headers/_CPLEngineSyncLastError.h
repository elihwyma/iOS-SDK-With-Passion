/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSError;

__attribute__((visibility("hidden")))
@interface _CPLEngineSyncLastError : NSObject

{
    NSDate *_date;
    NSError *_error;
}

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSError *error;

@end
