/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLUIControlState : NSObject

{
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;

+ (_Bool)isControlStateClass:(id)arg1;
+ (void)registerControlState:(id)arg1 forClass:(Class)arg2;
+ (void)verifyStateProperty:(id)arg1 withClass:(Class)arg2;

@end
