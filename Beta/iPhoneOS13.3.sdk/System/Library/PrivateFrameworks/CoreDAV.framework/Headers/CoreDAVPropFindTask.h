/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask

@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;

- (id)httpMethod;
- (id)requestBody;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end
