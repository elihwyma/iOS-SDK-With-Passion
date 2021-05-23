/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject

{
    _Bool _didFinish;
    NSDictionary *_errors;
}

@property (retain, nonatomic) NSDictionary *errors;
@property (nonatomic) _Bool didFinish;

- (id)description;

@end
