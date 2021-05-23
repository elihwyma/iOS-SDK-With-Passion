/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (copy, nonatomic) NSURL *searchContext;
@property (nonatomic) _Bool visible;

+ (id)visibilityView;
+ (id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
