/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CAMControlDrawerMenuItem : NSObject

{
    NSString *_title;
    NSString *_selectedTitle;
    NSNumber *_value;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *selectedTitle;
@property (nonatomic, readonly) NSNumber *value;

- (id)initWithTitle:(id)arg1 selectedTitle:(id)arg2 value:(id)arg3;
- (id)initWithTitle:(id)arg1 value:(id)arg2;

@end
