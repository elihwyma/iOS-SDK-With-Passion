/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class INIntent, NSString, NSURL, NSUserActivity;

@interface SGSuggestedEventLaunchInfo : NSObject

{
    NSString *_localizedShowInString;
    NSString *_userActivityString;
    NSString *_bundleId;
    INIntent *_intent;
    NSURL *_sourceURL;
}

@property (retain, nonatomic) NSString *userActivityString;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSString *localizedShowInString;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedShowInString:(id)arg2 userActivity:(id)arg3 intent:(id)arg4 sourceURL:(id)arg5;

@end
