/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString, SAUIImageResource;

@interface SAUITemplateImageView : SAUITemplateBaseItem

@property (nonatomic) float alpha;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *monogramName;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSArray *themeImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
