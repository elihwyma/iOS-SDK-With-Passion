/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMTvChannel : SADomainObject

@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *streamUrl;

+ (id)tvChannel;
+ (id)tvChannelWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
