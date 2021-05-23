/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertAction;

@interface ICDocCamRenamePrompt : NSObject

{
    NSString *_existingTitle;
    UIAlertAction *_saveAction;
    ICDocCamRenamePrompt *_strongSelf;
}

@property (copy, nonatomic) NSString *existingTitle;
@property (retain, nonatomic) UIAlertAction *saveAction;
@property (retain, nonatomic) ICDocCamRenamePrompt *strongSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldChanged:(id)arg1;
- (_Bool)isTitleValid:(id)arg1 error:(out id *)arg2;
- (id)initWithExistingTitle:(id)arg1;
- (void)showFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSingleButtonAlertFromViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3;
- (void)enableAction:(id)arg1 withString:(id)arg2;
- (id)stringByScrubbingStringForCollectionName:(id)arg1;

@end
