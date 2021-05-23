/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVAccessoryItemButton;

@protocol SVVideoTitleProviding;

@interface SVAccessoryItemTextContentProvider : NSObject

{
    SVAccessoryItemButton *_accessoryItemButton;
    id <SVVideoTitleProviding> _titleProvider;
    NSString *_headerText;
}

@property (nonatomic, readonly) SVAccessoryItemButton *accessoryItemButton;
@property (nonatomic, readonly) id <SVVideoTitleProviding> titleProvider;
@property (copy, nonatomic, readonly) NSString *headerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateAccessoryItemForVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithAccessoryItemButton:(id)arg1 titleProvider:(id)arg2 headerText:(id)arg3;

@end
