/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class INShortcut, NSDate, NSString, NSUserActivity;

@interface VCUserActivityDonation : NSObject

{
    NSString *_identifier;
    NSString *_sourceAppIdentifier;
    NSDate *_date;
    INShortcut *_shortcut;
    NSDate *_endDate;
}

@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSUserActivity *userActivity;
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

+ (id)timestampDateFormatter;

- (_Bool)isEqual:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)dateString;
- (id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4;

@end
