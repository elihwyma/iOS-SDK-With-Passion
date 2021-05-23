/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject

{
    FBSServiceFacility *_facility;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) FBSServiceFacility *facility;
@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)pendingConnectionToFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)initWithFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
