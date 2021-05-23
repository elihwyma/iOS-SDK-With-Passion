/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFDialogPhase : NSObject <Swift>

{
    long long _type;
}

@property (nonatomic, readonly, getter=_type) long long type;
@property (nonatomic, readonly, getter=isTemporary) _Bool temporary;
@property (nonatomic, readonly, getter=isExpository) _Bool expository;
@property (nonatomic, readonly, getter=isConfirmationDialogPhase) _Bool confirmationDialogPhase;
@property (nonatomic, readonly, getter=isReflectionDialogPhase) _Bool reflectionDialogPhase;
@property (nonatomic, readonly, getter=isClarificationDialogPhase) _Bool clarificationDialogPhase;
@property (nonatomic, readonly, getter=isConfirmedDialogPhase) _Bool confirmedDialogPhase;
@property (nonatomic, readonly, getter=isCancelledDialogPhase) _Bool cancelledDialogPhase;
@property (nonatomic, readonly, getter=isUserRequestDialogPhase) _Bool userRequestDialogPhase;
@property (nonatomic, readonly, getter=isErrorDialogPhase) _Bool errorDialogPhase;
@property (nonatomic, readonly, getter=isCompletionDialogPhase) _Bool completionDialogPhase;
@property (nonatomic, readonly, getter=isSummaryDialogPhase) _Bool summaryDialogPhase;
@property (nonatomic, readonly) NSString *aceDialogPhaseValue;

+ (_Bool)supportsSecureCoding;
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;
+ (id)userRequestDialogPhase;
+ (id)completionDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)acknowledgementDialogPhase;
+ (id)statusDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)summaryDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)errorDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)_dialogPhaseWithType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithType:(long long)arg1;
- (_Bool)isEqualToDialogPhase:(id)arg1;
- (_Bool)replacesPreviousSnippetContents;
- (_Bool)isPossiblyPartOfMultiTurnRequest;

@end
