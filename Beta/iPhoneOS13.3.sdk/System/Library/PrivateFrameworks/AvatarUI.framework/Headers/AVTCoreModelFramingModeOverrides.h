/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTCoreModelFramingModeOverrides : NSObject

{
    NSArray *_orderedTags;
    NSArray *_orderedFramingModeOverrides;
}

@property (nonatomic, readonly) NSArray *orderedTags;
@property (nonatomic, readonly) NSArray *orderedFramingModeOverrides;

- (id)initWithCameraOverrides:(id)arg1;

@end
