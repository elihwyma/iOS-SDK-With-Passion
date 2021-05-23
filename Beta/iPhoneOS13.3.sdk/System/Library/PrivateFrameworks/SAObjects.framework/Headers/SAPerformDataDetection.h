/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAPerformDataDetection : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSArray *detectionTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)performDataDetection;
+ (id)performDataDetectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
