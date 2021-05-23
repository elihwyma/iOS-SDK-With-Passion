/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, NSURL, SAUIImageResource;

@interface SAAnswerObjectLine : AceObject <Swift>

@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSNumber *imageInverted;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectLine;
+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
