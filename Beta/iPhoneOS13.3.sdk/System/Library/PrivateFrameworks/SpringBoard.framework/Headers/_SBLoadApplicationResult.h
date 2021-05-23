/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SBLoadApplicationResult : NSObject

{
    _Bool _success;
    _Bool _update;
    NSString *_errorDescription;
}

@property (nonatomic, getter=isSuccess) _Bool success;
@property (nonatomic, getter=isUpdate) _Bool update;
@property (copy, nonatomic) NSString *errorDescription;

@end
