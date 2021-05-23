/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSLock : NSObject

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
- (_Bool)lockBeforeDate:(id)arg1;
- (_Bool)tryLock;

@end
