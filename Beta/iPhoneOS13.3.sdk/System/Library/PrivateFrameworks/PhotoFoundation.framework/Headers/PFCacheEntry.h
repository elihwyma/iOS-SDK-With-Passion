/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@protocol NSCopying><NSObject;

@interface PFCacheEntry : NSObject

{
    id <NSCopying><NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (id)description;
- (id)key;
- (id)value;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (unsigned long long)readCount;
- (void)touch;
- (unsigned long long)createTime;
- (unsigned long long)lastReadTime;

@end
