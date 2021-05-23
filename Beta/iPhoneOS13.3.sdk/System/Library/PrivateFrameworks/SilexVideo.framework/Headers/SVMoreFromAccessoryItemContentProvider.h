/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVMoreFromButton;

@protocol SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding;

@interface SVMoreFromAccessoryItemContentProvider : NSObject

{
    SVMoreFromButton *_accessoryItemButton;
    id <SVMoreFromPublisherActionTitleProviding> _titleProvider;
    id <SVMoreFromPublisherLogoProviding> _logoProvider;
    CDUnknownBlockType _logoCancellationBlock;
}

@property (nonatomic, readonly) SVMoreFromButton *accessoryItemButton;
@property (nonatomic, readonly) id <SVMoreFromPublisherActionTitleProviding> titleProvider;
@property (nonatomic, readonly) id <SVMoreFromPublisherLogoProviding> logoProvider;
@property (copy, nonatomic) CDUnknownBlockType logoCancellationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateAccessoryItemForVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3;

@end
