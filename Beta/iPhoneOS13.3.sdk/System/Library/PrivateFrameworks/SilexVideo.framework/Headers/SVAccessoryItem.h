/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface SVAccessoryItem : NSObject

{
    UIView *_view;
    unsigned long long _displayMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) unsigned long long displayMode;

- (id)initWithView:(id)arg1;

@end
