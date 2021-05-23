/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface _LSOpenCopierContext : NSObject

{
    int _callbackType;
    NSURL *_destURL;
    NSError *_error;
}

@property (nonatomic) int callbackType;
@property (retain, nonatomic) NSURL *destURL;
@property (retain, nonatomic) NSError *error;

@end
