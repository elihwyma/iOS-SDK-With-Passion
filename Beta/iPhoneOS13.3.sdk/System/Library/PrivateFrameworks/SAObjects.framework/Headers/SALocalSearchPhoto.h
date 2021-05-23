/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <Swift>

@property (copy, nonatomic) NSURL *fullsize;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *largeSize;
@property (copy, nonatomic) NSURL *maximumSize;
@property (retain, nonatomic) SAUIAppPunchOut *photoPunchOut;
@property (copy, nonatomic) NSURL *thumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)photo;
+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
