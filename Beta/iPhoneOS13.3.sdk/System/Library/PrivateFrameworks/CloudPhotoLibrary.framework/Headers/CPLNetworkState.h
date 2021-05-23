/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@protocol OS_nw_path;

@interface CPLNetworkState : NSObject

{
    NSObject<OS_nw_path> *_networkPath;
}

@property (nonatomic, readonly) NSObject<OS_nw_path> *networkPath;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (nonatomic, readonly, getter=isConstrained) _Bool constrained;
@property (nonatomic, readonly, getter=isCellular) _Bool cellular;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)redactedDescription;
- (id)initWithNetworkPath:(id)arg1;

@end
