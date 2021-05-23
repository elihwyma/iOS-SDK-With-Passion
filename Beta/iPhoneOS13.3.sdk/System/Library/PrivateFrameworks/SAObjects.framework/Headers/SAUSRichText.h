/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAUSRichText : AceObject <Swift>

@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSString *formattedTextDelimiter;
@property (copy, nonatomic) NSArray *markupList;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSNumber *starRating;
@property (copy, nonatomic) NSNumber *textMaxlines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)richText;
+ (id)richTextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
