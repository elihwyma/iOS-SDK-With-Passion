/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUFillScalePolicy : NSObject

{
    CDStruct_d58201db _size;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithTargetSize:(struct CGSize)arg1;
- (id)initWithTargetPixelSize:(CDStruct_912cb5d2)arg1;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;

@end
