/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIImageView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSNumber *tintColor;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
