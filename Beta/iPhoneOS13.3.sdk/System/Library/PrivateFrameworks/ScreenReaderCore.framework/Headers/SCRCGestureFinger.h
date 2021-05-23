/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCGestureFinger : NSObject

{
    unsigned long long _identifier;
    struct CGPoint _location;
    double _pressure;
}

- (id)description;
- (long long)type;
- (unsigned long long)identifier;
- (struct CGPoint)location;
- (double)pressure;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;

@end
