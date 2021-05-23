/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSOptional : NSObject

{
    id _value;
}

@property (nonatomic, readonly) id value;

+ (id)optionalWithNil;
+ (id)optionalWithValue:(id)arg1;

- (id)init;
- (id)initWithValue:(id)arg1;

@end
