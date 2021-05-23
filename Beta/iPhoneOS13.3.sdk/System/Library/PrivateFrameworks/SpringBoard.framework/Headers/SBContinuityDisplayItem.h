/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem

{
    SBBestAppSuggestion *_appSuggestion;
}

@property (nonatomic, readonly) SBBestAppSuggestion *appSuggestion;

+ (id)continuityAppDisplayItemWithBundleIdentifier:(id)arg1 appSuggestion:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3;

@end
