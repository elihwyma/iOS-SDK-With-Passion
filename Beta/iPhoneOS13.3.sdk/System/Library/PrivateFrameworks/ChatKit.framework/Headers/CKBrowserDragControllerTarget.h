/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKBrowserDragControllerTarget : NSObject

{
    double _scale;
    double _meshScaleFactor;
    double _rotation;
    unsigned long long _associatedLayoutIntent;
    struct CGPoint _screenCoordiante;
    struct CGSize _initialSize;
}

@property (nonatomic) struct CGPoint screenCoordiante;
@property (nonatomic) struct CGSize initialSize;
@property (nonatomic) double scale;
@property (nonatomic) double meshScaleFactor;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned long long associatedLayoutIntent;

+ (id)targetWithScreenCoordiante:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 associatedLayoutIntent:(unsigned long long)arg6;

- (id)description;

@end
