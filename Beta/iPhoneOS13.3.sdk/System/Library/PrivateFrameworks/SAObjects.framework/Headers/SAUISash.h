/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUISash : AceObject <Swift>

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAUIImageResource *image;
@property (retain, nonatomic) SAUIColor *textColor;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sash;
+ (id)sashWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
