/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAMPNowPlayingQueuePosition : AceObject <Swift>

@property (nonatomic) long long index;
@property (nonatomic) long long queueSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nowPlayingQueuePosition;
+ (id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
