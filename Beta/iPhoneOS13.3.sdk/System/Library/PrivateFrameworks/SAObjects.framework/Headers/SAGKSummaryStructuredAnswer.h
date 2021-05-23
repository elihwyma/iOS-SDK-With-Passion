/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject

@property (copy, nonatomic) NSArray *answerPropertyGroups;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSString *imageCaption;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)summaryStructuredAnswer;
+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
