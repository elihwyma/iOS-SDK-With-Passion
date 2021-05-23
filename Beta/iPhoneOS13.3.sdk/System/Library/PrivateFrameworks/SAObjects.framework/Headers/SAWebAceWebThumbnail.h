/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWebAcePicture.h>

@class NSURL;

@interface SAWebAceWebThumbnail : SAWebAcePicture

@property (copy, nonatomic) NSURL *url;

+ (id)aceWebThumbnail;
+ (id)aceWebThumbnailWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
