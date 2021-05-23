/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASComment;

@interface MSASCommentChange : NSObject

{
    int _deletionIndex;
    int _type;
    MSASComment *_comment;
}

@property (retain, nonatomic) MSASComment *comment;
@property (nonatomic) int deletionIndex;
@property (nonatomic) int type;

- (id)description;

@end
