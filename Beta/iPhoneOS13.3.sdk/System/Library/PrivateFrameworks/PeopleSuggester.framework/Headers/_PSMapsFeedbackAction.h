/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <PeopleSuggester/_PSFeedbackAction.h>

@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction

{
    NSString *_contactId;
    NSString *_handle;
}

@property (copy, nonatomic, readonly) NSString *contactId;
@property (copy, nonatomic, readonly) NSString *handle;

+ (id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;
+ (id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;

- (id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3;

@end
