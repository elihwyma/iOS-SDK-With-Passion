/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *utsId;

+ (id)playTrailer;
+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
