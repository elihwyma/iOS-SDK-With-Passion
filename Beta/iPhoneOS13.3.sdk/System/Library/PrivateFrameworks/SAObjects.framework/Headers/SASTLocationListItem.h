/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString, SASTTemplateStarRating, SAUIDecoratedText;

@protocol SASTTemplateAction;

@interface SASTLocationListItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (retain, nonatomic) SAUIDecoratedText *formattedDistance;
@property (retain, nonatomic) SASTTemplateStarRating *rating;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)locationListItem;
+ (id)locationListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
