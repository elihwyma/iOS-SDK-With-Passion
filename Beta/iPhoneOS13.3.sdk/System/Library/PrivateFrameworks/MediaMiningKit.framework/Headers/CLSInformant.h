/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSInformant : NSObject

{
    NSString *_uuid;
}

@property (copy, nonatomic, readonly) NSString *uuid;

+ (id)identifier;
+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)supportedOutputClueKeys;

- (id)init;
- (id)uniqueIdentifier;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
