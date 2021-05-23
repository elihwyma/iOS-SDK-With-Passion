/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogMultiSuspendableQueueState : PBCodable

{
    NSString *_label;
    int _resumeCount;
    NSString *_target;
    struct {
        unsigned int resumeCount:1;
    } _has;
}

@property (nonatomic) _Bool hasResumeCount;
@property (nonatomic) int resumeCount;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasTarget;
@property (retain, nonatomic) NSString *target;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
