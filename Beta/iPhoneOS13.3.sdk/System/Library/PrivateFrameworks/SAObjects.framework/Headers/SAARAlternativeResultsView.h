/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) long long rank;
@property (retain, nonatomic) SAUIAddViews *resultView;
@property (nonatomic) _Bool suggestedResult;
@property (copy, nonatomic) NSString *utterance;

+ (id)alternativeResultsView;
+ (id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
