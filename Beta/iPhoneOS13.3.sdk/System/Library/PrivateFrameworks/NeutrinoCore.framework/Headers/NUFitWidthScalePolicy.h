/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUFitWidthScalePolicy : NSObject

{
    long long _width;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithWidth:(long long)arg1;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;

@end
