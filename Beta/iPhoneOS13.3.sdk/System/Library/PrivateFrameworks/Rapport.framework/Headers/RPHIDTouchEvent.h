/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@interface RPHIDTouchEvent : NSObject

{
    int _finger;
    int _phase;
    double _timestampSeconds;
    struct CGPoint _location;
}

@property (nonatomic) int finger;
@property (nonatomic) struct CGPoint location;
@property (nonatomic) int phase;
@property (nonatomic) double timestampSeconds;

@end
