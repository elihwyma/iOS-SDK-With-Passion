/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NotificationSender : NSObject

{
    NSString *_name;
    NSDictionary *_userInfo;
}

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
