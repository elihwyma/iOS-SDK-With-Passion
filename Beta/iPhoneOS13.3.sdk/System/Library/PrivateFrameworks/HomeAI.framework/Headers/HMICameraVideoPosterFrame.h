/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HMICameraVideoPosterFrame : NSObject

{
    NSData *_data;
    unsigned long long _width;
    unsigned long long _height;
    CDStruct_1b6d18a9 _timeOffset;
}

@property (readonly) NSData *data;
@property (readonly) CDStruct_1b6d18a9 timeOffset;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 timeOffset:(CDStruct_1b6d18a9)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;

@end
