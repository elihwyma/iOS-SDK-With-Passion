/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <Swift>

@property (copy, nonatomic) NSData *appIconDynamicImage;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSURL *appStoreURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)watchListChannelDetails;
+ (id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
