/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <FrontBoardServices/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic, readonly) unsigned long long events;

- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)initWithEvents:(unsigned long long)arg1;
- (id)initWithEvents:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)sendResponseWithUnHandledEvents:(unsigned long long)arg1;

@end
