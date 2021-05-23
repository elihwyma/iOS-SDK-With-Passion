/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRecipient.h>

@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient

{
    NSString *_additionalLocalizedName;
    PHPerson *_person;
}

@property (nonatomic, readonly) PHPerson *person;

- (id)localizedName;
- (id)initWithPerson:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 localizedName:(id)arg3;

@end
