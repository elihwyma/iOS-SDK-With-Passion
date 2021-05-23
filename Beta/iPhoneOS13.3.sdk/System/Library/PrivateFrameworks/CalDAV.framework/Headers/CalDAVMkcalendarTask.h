/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@protocol CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask

{
    NSSet *_setElements;
}

@property (retain, nonatomic) NSSet *setElements;
@property (nonatomic) id <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (void)setSupportForEvents:(_Bool)arg1 tasks:(_Bool)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;

@end
