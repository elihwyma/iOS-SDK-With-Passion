/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

{
    id _appSpecificDataItemResult;
    _Bool _forceNoCache;
}

@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) _Bool forceNoCache;

- (id)description;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;

@end
