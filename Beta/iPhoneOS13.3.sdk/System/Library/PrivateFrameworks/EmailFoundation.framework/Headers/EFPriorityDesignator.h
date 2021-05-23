/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFPriorityDesignator : NSObject

{
    unsigned long long _priority;
}

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignator;
+ (id)pushNewDesignator;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorStack;

@end
