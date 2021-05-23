/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (weak, nonatomic) id <CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;

- (id)initWithURL:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;

@end
