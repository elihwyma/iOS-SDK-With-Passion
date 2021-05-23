/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLRequest : NSObject

{
    NSString *_successNotificationName;
    NSString *_failureNotificationName;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) NSString *successNotificationName;
@property (retain, nonatomic) NSString *failureNotificationName;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
