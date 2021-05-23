/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAUITemplateParagraphStyle : AceObject <Swift>

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSNumber *firstLineHeadIndent;
@property (copy, nonatomic) NSNumber *getParagraphSpacingBefore;
@property (copy, nonatomic) NSNumber *headIndent;
@property (copy, nonatomic) NSNumber *lineHeightMultiple;
@property (copy, nonatomic) NSNumber *lineSpacing;
@property (copy, nonatomic) NSNumber *maximumLineHeight;
@property (copy, nonatomic) NSNumber *minimumLineHeight;
@property (copy, nonatomic) NSNumber *paragraphSpacing;
@property (copy, nonatomic) NSNumber *tailIndent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)paragraphStyle;
+ (id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
