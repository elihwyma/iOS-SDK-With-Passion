/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <Swift>

@property (nonatomic) long long pageNumber;
@property (copy, nonatomic) NSString *targetShelfViewId;
@property (copy, nonatomic) NSString *targetViewId;
@property (copy, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentShelfUpdateInfo;
+ (id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
