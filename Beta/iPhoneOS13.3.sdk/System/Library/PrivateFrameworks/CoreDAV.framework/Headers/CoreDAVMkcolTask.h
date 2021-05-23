/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSURL;

@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask

{
    NSSet *_propertiesToSet;
    _Bool _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property (retain, nonatomic) NSSet *propertiesToSet;
@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;

@end
