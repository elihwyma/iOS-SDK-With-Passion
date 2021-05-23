/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHAJobWorkInfo : NSObject

{
    int _workerFlags;
    NSString *_assetLocalIdentifier;
}

@property (copy, nonatomic, readonly) NSString *assetLocalIdentifier;
@property (nonatomic) int workerFlags;

- (id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2;

@end
