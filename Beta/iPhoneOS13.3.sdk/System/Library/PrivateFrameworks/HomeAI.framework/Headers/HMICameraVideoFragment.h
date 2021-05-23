/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSURL;

@interface HMICameraVideoFragment : NSObject

{
    unsigned long long _sequenceNumber;
    NSData *_data;
    NSData *_moovFragment;
    long long _eventTypes;
    NSURL *_url;
}

@property (readonly) NSMutableData *fragmentData;
@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long sequenceNumber;
@property (readonly) NSData *data;
@property (nonatomic, readonly) NSData *moovFragment;
@property (readonly) long long eventTypes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 eventTypes:(long long)arg4;
- (id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3;
- (id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3;
- (id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 url:(id)arg4;

@end
