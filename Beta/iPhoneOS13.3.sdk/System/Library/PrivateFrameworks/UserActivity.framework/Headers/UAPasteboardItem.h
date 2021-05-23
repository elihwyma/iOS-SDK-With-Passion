/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface UAPasteboardItem : NSObject

{
    NSArray *_types;
}

@property (copy, nonatomic) NSArray *types;

- (id)init;
- (id)description;
- (void)addType:(id)arg1;

@end
