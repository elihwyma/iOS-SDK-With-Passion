/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@class CFServiceHelper;

@interface CFRequestHandler : NSObject

{
    CFServiceHelper *_serviceHelper;
}

@property (retain) CFServiceHelper *serviceHelper;

- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServiceHelper:(id)arg1;
- (id)initClientLiteHelper;
- (void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3;
- (_Bool)isTimeoutDisabled;

@end
