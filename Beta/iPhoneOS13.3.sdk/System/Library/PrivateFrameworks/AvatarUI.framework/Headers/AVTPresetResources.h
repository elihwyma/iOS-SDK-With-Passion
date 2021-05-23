/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject

{
    AVTPreset *_preset;
}

@property (nonatomic, readonly) AVTPreset *preset;
@property (copy, nonatomic, readonly) NSString *presetIdentifier;
@property (nonatomic, readonly) id resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)requiresEncryption;
- (id)initWithPreset:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (unsigned long long)costForScope:(id)arg1;

@end
