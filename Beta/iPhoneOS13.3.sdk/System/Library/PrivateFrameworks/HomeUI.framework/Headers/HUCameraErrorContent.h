/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUCameraErrorContent : NSObject

{
    NSString *_titleText;
    NSString *_descriptionText;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;

+ (id)errorWithTitle:(id)arg1 description:(id)arg2;

@end
