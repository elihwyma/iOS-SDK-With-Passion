/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject

{
    int _status;
    NSString *_sourceID;
    NSString *_destID;
    DAMessageMoveRequest *_origRequest;
}

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *destID;
@property (retain, nonatomic) DAMessageMoveRequest *origRequest;

- (id)description;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;

@end
