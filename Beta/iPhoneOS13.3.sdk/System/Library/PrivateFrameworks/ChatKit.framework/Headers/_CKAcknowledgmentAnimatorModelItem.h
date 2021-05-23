/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject

{
    CKEntity *_entity;
    NSIndexPath *_indexPath;
    long long _ackVoteCount;
    long long _acknowledgmentType;
}

@property (retain, nonatomic) CKEntity *entity;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long ackVoteCount;
@property (nonatomic) long long acknowledgmentType;

@end
