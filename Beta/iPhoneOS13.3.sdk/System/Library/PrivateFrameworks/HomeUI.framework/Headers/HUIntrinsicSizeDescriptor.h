/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject

{
    unsigned long long _flexType;
    NSNumber *_aspectRatio;
    struct CGSize _intrinsicSize;
}

@property (nonatomic, readonly) struct CGSize intrinsicSize;
@property (nonatomic, readonly) unsigned long long flexType;
@property (copy, nonatomic, readonly) NSNumber *aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)noIntrinsicSizeDescriptor;
+ (id)descriptorWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2;
+ (id)descriptorWithAspectRatio:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3;

@end
