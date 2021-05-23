/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _DKEventData : NSObject

{
    unsigned long long _version;
    NSData *_event;
    unsigned long long _uncompressedLength;
}

@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSData *event;
@property (nonatomic, readonly) unsigned long long uncompressedLength;

+ (id)fromPBCodable:(id)arg1;
+ (id)createFromData:(id)arg1;

- (id)toPBCodable;
- (id)asData;
- (id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;

@end
