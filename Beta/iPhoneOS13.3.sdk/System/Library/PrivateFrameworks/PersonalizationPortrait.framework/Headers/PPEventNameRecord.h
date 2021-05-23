/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PPEventNameRecord : NSObject

{
    unsigned char _changeType;
    NSString *_identifier;
    double _score;
    NSString *_eventIdentifier;
    NSString *_title;
    NSString *_location;
    NSArray *_participantNames;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic) unsigned char changeType;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSArray *participantNames;

+ (_Bool)supportsSecureCoding;
+ (id)describeChangeType:(unsigned char)arg1;
+ (id)eventNameRecordWithScore:(double)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 eventIdentifier:(id)arg3 changeType:(unsigned char)arg4 title:(id)arg5 location:(id)arg6 participantNames:(id)arg7;
- (_Bool)hasScoreSimilarToRecord:(id)arg1;
- (_Bool)isEqualToEventNameRecord:(id)arg1;

@end
