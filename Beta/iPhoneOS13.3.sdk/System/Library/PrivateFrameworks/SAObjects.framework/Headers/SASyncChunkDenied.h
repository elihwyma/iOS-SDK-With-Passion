/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SASyncAnchor;

@interface SASyncChunkDenied : SABaseClientBoundCommand <Swift>

@property (retain, nonatomic) SASyncAnchor *current;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)chunkDenied;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDeniedWithErrorCode:(long long)arg1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)arg1;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
