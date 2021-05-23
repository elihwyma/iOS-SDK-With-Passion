/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@protocol UITraitEnvironment;

@interface _SFBrowserConfiguration : NSObject

{
    long long _configuration;
    id <UITraitEnvironment> _traitEnvironment;
}

@property (nonatomic, readonly, getter=isPrivateBrowsingEnabled) _Bool privateBrowsingEnabled;
@property (weak, nonatomic, readonly) id <UITraitEnvironment> traitEnvironment;
@property (nonatomic, readonly, getter=isControlledByAutomation) _Bool controlledByAutomation;
@property (nonatomic, readonly) _Bool allowsKeyboardCorrectionLearning;
@property (nonatomic, readonly) _Bool allowsRestoringEducationTabs;
@property (nonatomic, readonly) _Bool allowsSearchSuggestions;
@property (nonatomic, readonly) _Bool allowsSiteSpecificSearch;
@property (nonatomic, readonly) _Bool allowsSpeculativeLoading;
@property (nonatomic, readonly) _Bool allowsStreamlinedLogin;
@property (nonatomic, readonly) _Bool allowsUserActivityFeedback;
@property (nonatomic, readonly) _Bool usesPersistentDataStore;
@property (nonatomic, readonly) _Bool allowsSearchFeedback;
@property (nonatomic, readonly) _Bool allowsClosingLastTab;
@property (nonatomic, readonly) _Bool allowsPersistingTabState;
@property (nonatomic, readonly) _Bool allowsReopeningClosedTabs;
@property (nonatomic, readonly) unsigned long long barTintStyle;
@property (nonatomic, readonly) _Bool usesDarkTheme;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPrivateBrowsingEnabled:(_Bool)arg1 traitEnvironment:(id)arg2 controlledByAutomation:(_Bool)arg3;

@end
