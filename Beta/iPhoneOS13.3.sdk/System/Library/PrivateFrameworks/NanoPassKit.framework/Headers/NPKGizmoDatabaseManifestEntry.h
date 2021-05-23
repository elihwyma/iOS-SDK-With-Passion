/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NPKGizmoDatabaseManifestEntry : NSObject

{
    NSString *_uniqueID;
    NSArray *_localManifestHashes;
    NSArray *_remoteManifestHashes;
}

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSArray *localManifestHashes;
@property (retain, nonatomic) NSArray *remoteManifestHashes;

- (id)description;

@end
