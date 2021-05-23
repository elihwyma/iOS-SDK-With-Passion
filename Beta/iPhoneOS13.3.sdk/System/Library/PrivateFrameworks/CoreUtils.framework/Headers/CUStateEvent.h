/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface CUStateEvent : NSObject

{
    NSString *_name;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

+ (id)enterState;
+ (id)exitState;
+ (id)initialTransition;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;

@end
