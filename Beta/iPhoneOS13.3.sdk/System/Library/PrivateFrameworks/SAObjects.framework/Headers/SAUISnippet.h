/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString, SAUIConfirmationOptions, SAUISash;

@interface SAUISnippet : SAAceView

@property (nonatomic) long long category;
@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (retain, nonatomic) SAUISash *sash;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *title;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
