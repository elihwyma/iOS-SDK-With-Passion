/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class NSString;

@interface MontrealLogIndent : NSObject

{
    NSString *_step;
    unsigned long long _factor;
    NSString *_level;
}

@property (readonly) NSString *step;
@property (readonly) unsigned long long factor;
@property (readonly) NSString *level;

+ (id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;
+ (id)indentWithLevel:(id)arg1;

- (id)description;
- (id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;
- (id)indentByFactor:(unsigned long long)arg1;

@end
