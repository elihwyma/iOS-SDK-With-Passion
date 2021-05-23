/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@interface ASFriendListDisplayContext : NSObject

{
    long long _displayMode;
    long long _displayFilter;
}

@property (nonatomic) long long displayMode;
@property (nonatomic) long long displayFilter;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
