/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoFaceDetectedObject : NSObject

{
    float confidence;
    long long objectType;
    struct CGPoint center;
    struct CGRect bounds;
}

@property float confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property long long objectType;
@property struct CGRect bounds;
@property struct CGPoint center;

- (id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4;

@end
