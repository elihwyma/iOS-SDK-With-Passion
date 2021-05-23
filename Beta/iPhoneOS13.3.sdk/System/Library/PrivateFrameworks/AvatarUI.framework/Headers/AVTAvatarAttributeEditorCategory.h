/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreModelGroup, NSArray, NSString;

@interface AVTAvatarAttributeEditorCategory : NSObject

{
    NSArray *_sections;
    NSString *_localizedName;
    AVTCoreModelGroup *_modelGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *sections;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) AVTCoreModelGroup *modelGroup;

- (id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3;
- (id)representedAVTPresetResources;

@end
