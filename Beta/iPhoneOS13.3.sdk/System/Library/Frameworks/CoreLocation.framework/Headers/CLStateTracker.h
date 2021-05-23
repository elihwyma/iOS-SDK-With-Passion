/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface CLStateTracker : NSObject

{
    unsigned long long _handle;
}

@property (nonatomic, readonly) void *identifier;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;

@end
