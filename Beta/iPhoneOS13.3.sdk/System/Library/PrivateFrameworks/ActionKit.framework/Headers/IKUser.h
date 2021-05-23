/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKUser : NSObject

{
    unsigned long long _userID;
    NSString *_username;
    _Bool _subscribed;
}

@property (nonatomic) unsigned long long userID;
@property (copy, nonatomic) NSString *username;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;

- (id)init;
- (void)dealloc;
- (id)description;

@end
