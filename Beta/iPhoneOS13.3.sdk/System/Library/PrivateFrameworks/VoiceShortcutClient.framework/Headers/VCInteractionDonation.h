/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class INInteraction, INShortcut, NSDate, NSString;

@interface VCInteractionDonation : NSObject

{
    NSString *_identifier;
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    INInteraction *_interaction;
}

@property (nonatomic, readonly) INInteraction *interaction;
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

+ (void)initialize;
+ (id)timestampDateFormatter;

- (_Bool)isEqual:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3;

@end
