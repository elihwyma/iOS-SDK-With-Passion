/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGetStateResponse : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *hashedGroupID;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (copy, nonatomic) NSNumber *listeningToMusicApplication;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)getStateResponse;
+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
