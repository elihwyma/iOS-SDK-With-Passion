/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, SAIntentGroupDetailLabelTemplateComponent, SALocation, SAUIColor;

@protocol SAIntentGroupSetMapLocation;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (retain, nonatomic) SAUIColor *color;
@property (retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property (nonatomic) _Bool interactive;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mapSize;
@property (retain, nonatomic) id <SAIntentGroupSetMapLocation> updateLocationCommand;

+ (id)mapSnippetTemplate;
+ (id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
