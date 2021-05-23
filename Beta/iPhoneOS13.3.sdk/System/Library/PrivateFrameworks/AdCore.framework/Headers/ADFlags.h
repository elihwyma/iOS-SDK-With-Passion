/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@interface ADFlags : NSObject

{
    unsigned long long _flags;
}

@property unsigned long long flags;

+ (id)initWithFlags:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (_Bool)isSet:(unsigned long long)arg1;
- (void)set:(unsigned long long)arg1;
- (unsigned long long)anySet:(unsigned long long)arg1;
- (_Bool)allSet:(unsigned long long)arg1;
- (void)unset:(unsigned long long)arg1;
- (_Bool)noneSet;

@end
