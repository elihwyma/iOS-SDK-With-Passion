/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

{
    NSArray *_accessControlEntities;
}

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id <CoreDAVACLTaskDelegate> delegate;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;

@end
