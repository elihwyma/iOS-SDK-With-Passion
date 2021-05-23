/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSAttributedString, NSString, WFSlotIdentifier;

@interface WFSlotTemplateSlot : NSObject <Swift>

{
    _Bool _enabled;
    _Bool _invalid;
    _Bool _prefersNoWrapping;
    _Bool _standaloneTextAttachment;
    WFSlotIdentifier *_identifier;
    NSString *_localizedName;
    NSString *_localizedPlaceholder;
    NSAttributedString *_contentAttributedString;
    long long _userInputInsertionIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) WFSlotIdentifier *identifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isInvalid) _Bool invalid;
@property (nonatomic, readonly, getter=isPopulated) _Bool populated;
@property (copy, nonatomic) NSAttributedString *contentAttributedString;
@property (nonatomic) _Bool prefersNoWrapping;
@property (nonatomic) _Bool standaloneTextAttachment;
@property (nonatomic) long long userInputInsertionIndex;

+ (id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 key:(id)arg3;
+ (id)addingSlotWithKey:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 identifier:(id)arg3;
- (void)populateWithIcon:(id)arg1 string:(id)arg2;
- (void)populateWithString:(id)arg1;
- (void)populateWithVariable:(id)arg1;
- (void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2;

@end
