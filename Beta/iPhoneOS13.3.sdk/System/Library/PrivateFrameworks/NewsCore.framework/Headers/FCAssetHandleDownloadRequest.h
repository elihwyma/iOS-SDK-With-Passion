/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject

{
    long long _relativePriority;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _priorityHandler;
}

@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (copy, nonatomic) CDUnknownBlockType priorityHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (void)cancel;

@end
