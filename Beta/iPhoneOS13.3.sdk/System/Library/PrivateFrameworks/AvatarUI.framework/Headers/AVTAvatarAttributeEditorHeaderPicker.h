/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTAvatarAttributeEditorHeaderPicker : NSObject

{
    _Bool _alwaysPresentAlert;
    NSString *_identifier;
    NSArray *_choices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *choices;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool alwaysPresentAlert;

+ (id)headerPickerFromEditorSection:(id)arg1;
+ (id)headerPickerForPairableModelCategory:(id)arg1 isPaired:(_Bool)arg2 avatarUpdaterOnPair:(CDUnknownBlockType)arg3;

- (id)initWithIdentifier:(id)arg1 choices:(id)arg2 alwaysPresentAlert:(_Bool)arg3;

@end
