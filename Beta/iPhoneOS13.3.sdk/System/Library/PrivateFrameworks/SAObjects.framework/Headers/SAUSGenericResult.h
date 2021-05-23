/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUIAppPunchOut, SAUIImageResource;

@interface SAUSGenericResult : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *actionButton;
@property (nonatomic) _Bool centered;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (retain, nonatomic) SAUIImageResource *thumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *titleMaxLines;

+ (id)genericResult;
+ (id)genericResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
