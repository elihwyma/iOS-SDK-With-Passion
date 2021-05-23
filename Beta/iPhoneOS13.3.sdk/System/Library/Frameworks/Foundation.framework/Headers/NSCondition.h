/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSCondition : NSObject

{
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)lock;
- (void)unlock;
- (void)wait;
- (_Bool)waitUntilDate:(id)arg1;
- (void)signal;
- (void)broadcast;

@end
