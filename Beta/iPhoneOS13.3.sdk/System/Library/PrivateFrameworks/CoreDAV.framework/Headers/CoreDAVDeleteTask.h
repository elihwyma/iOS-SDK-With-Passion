/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask

{
    NSString *_previousETag;
}

@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)description;
- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end
