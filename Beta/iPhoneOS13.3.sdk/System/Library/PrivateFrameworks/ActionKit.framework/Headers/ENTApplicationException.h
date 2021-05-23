/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENTException.h>

@interface ENTApplicationException : ENTException

{
    int _type;
}

+ (id)read:(id)arg1;
+ (id)exceptionWithType:(int)arg1 reason:(id)arg2;

- (void)write:(id)arg1;
- (id)initWithType:(int)arg1 reason:(id)arg2;

@end
