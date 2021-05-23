/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUFixedScalePolicy : NSObject

{
    CDStruct_1e2b2e48 _scale;
}

@property (readonly) CDStruct_912cb5d2 scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)oneToOneScalePolicy;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScale:(CDStruct_912cb5d2)arg1;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;

@end
