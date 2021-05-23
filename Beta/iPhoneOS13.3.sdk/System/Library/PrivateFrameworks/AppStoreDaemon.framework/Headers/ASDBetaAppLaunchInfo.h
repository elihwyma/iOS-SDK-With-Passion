/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ASDBetaAppDisplayNames, ASDBetaAppVersion, NSDate, NSDictionary, NSString;

@interface ASDBetaAppLaunchInfo : NSObject <Swift>

{
    _Bool _feedbackEnabled;
    _Bool _launchScreenEnabled;
    _Bool _sharedFeedback;
    NSString *_artistName;
    ASDBetaAppDisplayNames *_displayNames;
    NSDate *_expirationDate;
    NSString *_iconURLTemplate;
    NSDate *_lastWelcomeScreenViewDate;
    NSDictionary *_localizedTestNotes;
    NSString *_testerEmail;
    ASDBetaAppVersion *_version;
}

@property (copy) NSString *artistName;
@property (copy) ASDBetaAppDisplayNames *displayNames;
@property (copy) NSDate *expirationDate;
@property (getter=isFeedbackEnabled) _Bool feedbackEnabled;
@property (copy) NSString *iconURLTemplate;
@property (copy) NSDate *lastWelcomeScreenViewDate;
@property (getter=isLaunchScreenEnabled) _Bool launchScreenEnabled;
@property (copy) NSDictionary *localizedTestNotes;
@property (getter=hasSharedFeedback) _Bool sharedFeedback;
@property (copy) NSString *testerEmail;
@property (copy) ASDBetaAppVersion *version;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
