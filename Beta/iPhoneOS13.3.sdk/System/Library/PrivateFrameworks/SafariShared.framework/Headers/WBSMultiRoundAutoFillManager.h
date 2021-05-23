/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSTimer, WBSFormMetadata;

@interface WBSMultiRoundAutoFillManager : NSObject

{
    unsigned long long _autoFillAttemptTrigger;
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;
    _Bool _userDidInteractWithForm;
    unsigned long long _numberOfFollowUpAutoFillAttempts;
    NSTimer *_timerForFollowUpAutoFill;
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;
    NSString *_addressSetLabelUsedDuringFirstAutoFillPass;
    NSSet *_addressBookPropertiesThatCanBeFilled;
}

@property (copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass;
@property (copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled;

- (id)init;
- (void)dealloc;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (_Bool)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(CDUnknownBlockType)arg2;
- (void)didEditFormText;
- (_Bool)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1;

@end
