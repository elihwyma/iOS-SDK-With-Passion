/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIButton.h>

@class NSArray, NSString, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSArray *togglePlayPauseCommands;
@property (copy, nonatomic) NSURL *url;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
