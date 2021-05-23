/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTCoreModelGroup : NSObject

{
    NSString *_name;
    NSArray *_categories;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *categories;

- (id)description;
- (id)initWithName:(id)arg1 categories:(id)arg2;

@end
