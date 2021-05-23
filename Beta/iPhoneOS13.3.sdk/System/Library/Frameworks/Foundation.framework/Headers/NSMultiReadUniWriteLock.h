/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSMultiReadUniWriteLock : NSObject

{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)name;
- (void)lock;
- (void)unlock;
- (void)setName:(id)arg1;
- (void)lockForReading;
- (_Bool)tryLockForReading;
- (_Bool)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (_Bool)tryLockForWriting;
- (_Bool)lockForWritingBeforeDate:(id)arg1;

@end
