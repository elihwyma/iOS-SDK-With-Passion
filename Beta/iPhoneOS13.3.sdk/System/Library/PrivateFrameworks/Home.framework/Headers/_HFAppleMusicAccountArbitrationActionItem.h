/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _HFAppleMusicAccountArbitrationActionItem : NSObject

{
    NSString *_actionItemDescription;
    NSSet *_accessories;
    NSDictionary *_userInfo;
    NAFuture *_future;
}

@property (retain, nonatomic) NSString *actionItemDescription;
@property (copy, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NAFuture *future;

+ (id)logoutActionItemForAccessories:(id)arg1 desiredAccount:(id)arg2;
+ (id)loginActionItemForAccessories:(id)arg1 account:(id)arg2 contextGenerator:(CDUnknownBlockType)arg3;

- (id)description;

@end
