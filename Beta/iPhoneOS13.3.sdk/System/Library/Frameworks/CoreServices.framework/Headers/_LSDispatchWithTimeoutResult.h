/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface _LSDispatchWithTimeoutResult : NSObject

{
    id _result;
    NSError *_error;
}

@property (retain) id result;
@property (retain) NSError *error;

@end
