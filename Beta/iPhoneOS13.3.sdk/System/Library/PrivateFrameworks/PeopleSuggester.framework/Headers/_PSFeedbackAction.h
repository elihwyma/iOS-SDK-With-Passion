/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSString, _PSSuggestion;

@interface _PSFeedbackAction : NSObject

{
    long long _type;
    _PSSuggestion *_suggestion;
    NSString *_transportBundleID;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _PSSuggestion *suggestion;
@property (copy, nonatomic, readonly) NSString *transportBundleID;

+ (id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1;
+ (id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2;
+ (id)abandonment;

- (id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3;

@end
