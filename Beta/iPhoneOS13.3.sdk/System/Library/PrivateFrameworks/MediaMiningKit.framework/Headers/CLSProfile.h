/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSProfile : NSObject

{
    NSString *_uuid;
}

@property (copy, nonatomic, readonly) NSString *uuid;

+ (id)identifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;

- (id)init;
- (id)description;
- (id)uniqueIdentifier;
- (void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;

@end
