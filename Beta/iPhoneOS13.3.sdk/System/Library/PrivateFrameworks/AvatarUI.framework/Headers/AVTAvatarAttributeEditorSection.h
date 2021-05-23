/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol AVTAvatarAttributeEditorHeaderPicker;

@interface AVTAvatarAttributeEditorSection : NSObject <Swift>

{
    NSArray *_sectionItems;
    NSString *_localizedName;
    NSString *_identifier;
    id <AVTAvatarAttributeEditorHeaderPicker> _headerAccessory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic, readonly) NSArray *sectionItems;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) id <AVTAvatarAttributeEditorHeaderPicker> headerAccessory;

- (_Bool)shouldDisplayTitle;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3;

@end
