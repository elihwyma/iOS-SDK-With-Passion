/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSURL;

@interface SAVCSPlayContent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (nonatomic) _Bool playTrailer;
@property (copy, nonatomic) NSString *utsId;

+ (id)playContent;
+ (id)playContentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
