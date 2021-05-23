/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject

{
    _Bool _networkAccessAllowed;
    _Bool _shouldPrioritize;
    _Bool _transient;
    NSString *_taskIdentifier;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _dataHandler;
}

@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (nonatomic) _Bool shouldPrioritize;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (nonatomic, getter=isTransient) _Bool transient;
@property (copy, nonatomic) CDUnknownBlockType dataHandler;

@end
