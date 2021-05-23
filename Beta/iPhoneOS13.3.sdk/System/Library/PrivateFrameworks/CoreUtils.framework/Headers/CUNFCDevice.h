/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NFTag, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface CUNFCDevice : NSObject

{
    NSURL *_advertisedURI;
    NSUUID *_identifier;
    NFTag *_tag;
}

@property (retain, nonatomic) NFTag *tag;
@property (copy, nonatomic) NSURL *advertisedURI;
@property (copy, nonatomic) NSUUID *identifier;

- (id)description;

@end
