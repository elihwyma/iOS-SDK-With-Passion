/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSPObject;

@interface TSPContainedObject : NSObject

{
    TSPObject *_owner;
}

@property (weak, nonatomic) TSPObject *owner;

- (id)initWithOwner:(id)arg1;
- (id)documentRoot;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
