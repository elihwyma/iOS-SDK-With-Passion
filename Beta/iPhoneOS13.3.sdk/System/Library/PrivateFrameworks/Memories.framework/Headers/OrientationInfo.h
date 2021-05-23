/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OrientationInfo : NSObject

{
    _Bool _isRotated;
    unsigned int _inputID;
    double _altAspect;
}

@property (nonatomic) double altAspect;
@property (nonatomic) _Bool isRotated;
@property (nonatomic) unsigned int inputID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
