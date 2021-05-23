/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class INShortcut, NSData, NSDate, NSString;

@interface WFMockActionDonation : NSObject

{
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_sourceAppIdentifierForLaunching;
    id _uniqueProperty;
    NSData *_actionData;
}

@property (copy, nonatomic, readonly) NSData *actionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSString *sourceAppIdentifier;
@property (copy, nonatomic, readonly) NSString *sourceAppIdentifierForDisplay;
@property (copy, nonatomic, readonly) NSString *sourceAppIdentifierForLaunching;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *fullDescription;
@property (copy, nonatomic, readonly) NSString *suggestedPhrase;
@property (nonatomic, readonly) id uniqueProperty;
@property (nonatomic, readonly) INShortcut *shortcut;

- (id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4;

@end
