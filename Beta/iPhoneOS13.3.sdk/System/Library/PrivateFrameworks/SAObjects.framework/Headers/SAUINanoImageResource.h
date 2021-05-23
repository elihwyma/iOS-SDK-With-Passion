/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (nonatomic) _Bool backgroundNeeded;
@property (copy, nonatomic) NSString *imageDownloadType;
@property (retain, nonatomic) SAUIDecoratedText *monogram;
@property (copy, nonatomic) NSString *placeholderImage;

+ (id)nanoImageResource;
+ (id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
