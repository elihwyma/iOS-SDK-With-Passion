/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject

{
    _Bool _animated;
    _Bool _updateModelOnly;
    NSDictionary *_userInfo;
}

@property (nonatomic) _Bool animated;
@property (nonatomic) _Bool updateModelOnly;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)context;
+ (id)contextWithUserInfo:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
