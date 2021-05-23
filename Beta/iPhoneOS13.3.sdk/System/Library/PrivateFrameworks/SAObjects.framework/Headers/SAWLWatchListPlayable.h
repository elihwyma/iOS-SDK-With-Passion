/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL, SAWLWatchListChannelDetails;

@interface SAWLWatchListPlayable : AceObject <Swift>

@property (retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
@property (nonatomic) _Bool entitled;
@property (nonatomic) _Bool installed;
@property (copy, nonatomic) NSURL *playURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)watchListPlayable;
+ (id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
