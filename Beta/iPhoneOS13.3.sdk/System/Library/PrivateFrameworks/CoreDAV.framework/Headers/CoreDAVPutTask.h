/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

{
    NSString *_nextETag;
}

@property (retain, nonatomic) NSString *nextETag;
@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;

- (id)description;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end
