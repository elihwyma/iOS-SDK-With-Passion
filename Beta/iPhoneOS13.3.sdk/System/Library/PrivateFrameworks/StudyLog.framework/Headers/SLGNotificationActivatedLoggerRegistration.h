/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <Foundation/NSObject.h>

@interface SLGNotificationActivatedLoggerRegistration : NSObject

{
    int _beginToken;
    int _endToken;
}

@property (nonatomic) int beginToken;
@property (nonatomic) int endToken;

+ (id)registrationWithBeginToken:(int)arg1 endToken:(int)arg2;

@end
