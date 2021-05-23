/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKVideoAsset : NSObject

{
    NSString *_URL;
    NSString *_programID;
    NSString *_assetID;
}

@property (copy, nonatomic, readonly) NSString *URL;
@property (copy, nonatomic, readonly) NSString *programID;
@property (copy, nonatomic, readonly) NSString *assetID;

- (id)initWithDictionary:(id)arg1;

@end
