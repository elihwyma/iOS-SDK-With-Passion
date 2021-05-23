/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber;

@interface IDSQRParticipantStreams : NSObject

{
    NSNumber *_participantID;
    NSMutableArray *_streamArray;
    _Bool _anyParticipant;
    _Bool _anyStream;
}

@property (readonly) NSNumber *participantID;
@property (readonly) NSMutableArray *streamArray;
@property (nonatomic, readonly) _Bool anyParticipant;
@property (nonatomic, readonly) _Bool anyStream;

+ (id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(_Bool)arg3 anyStream:(_Bool)arg4;

- (id)description;
- (id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(_Bool)arg3 anyStream:(_Bool)arg4;

@end
