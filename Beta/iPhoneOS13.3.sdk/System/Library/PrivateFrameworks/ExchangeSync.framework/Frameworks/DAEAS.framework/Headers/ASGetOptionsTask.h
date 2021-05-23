/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask

{
    NSArray *_versionArray;
    NSArray *_commandArray;
}

+ (void)__setUsePort:(_Bool)arg1;

- (id)_url;
- (void)finishWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (int)commandCode;
- (_Bool)processContext:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)requiresEASVersionInformaton;
- (void)setVersionArray:(id)arg1;
- (void)setCommandArray:(id)arg1;
- (id)commandArray;
- (id)versionArray;

@end
