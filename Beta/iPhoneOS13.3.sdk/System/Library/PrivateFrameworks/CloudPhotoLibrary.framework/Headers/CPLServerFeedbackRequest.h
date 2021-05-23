/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBRequest.h>

@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest

{
    NSMutableArray *_messages;
}

@property (retain, nonatomic) NSMutableArray *messages;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (void)addMessages:(id)arg1;
- (id)messagesAtIndex:(unsigned long long)arg1;

@end
