/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _DECFeedbackLoggerManager : NSObject

{
    NSArray *_loggers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_createLoggers;
- (void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4;

@end
