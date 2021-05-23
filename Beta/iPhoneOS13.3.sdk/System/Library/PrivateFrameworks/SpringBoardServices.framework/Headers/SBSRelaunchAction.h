/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <FrontBoardServices/BSAction.h>

@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long options;
@property (retain, nonatomic, readonly) NSURL *targetURL;

+ (id)actionWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3;

- (id)initWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3;

@end
