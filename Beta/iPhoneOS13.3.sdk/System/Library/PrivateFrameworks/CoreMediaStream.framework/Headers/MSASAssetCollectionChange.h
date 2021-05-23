/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSASAssetCollectionChange : NSObject

{
    _Bool _wasDeleted;
    NSString *_GUID;
    NSString *_ctag;
}

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) _Bool wasDeleted;

- (id)description;

@end
