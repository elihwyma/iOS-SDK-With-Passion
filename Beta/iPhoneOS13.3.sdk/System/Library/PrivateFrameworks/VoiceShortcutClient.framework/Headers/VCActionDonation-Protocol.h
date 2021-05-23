/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <VoiceShortcutClient/Swift-Protocol.h>

@class INShortcut, NSDate, NSString;

@protocol VCActionDonation <Swift>

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

@end
