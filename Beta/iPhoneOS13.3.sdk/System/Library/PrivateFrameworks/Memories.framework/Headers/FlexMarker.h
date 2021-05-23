/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FlexMarker : NSObject

{
    NSString *_name;
    long long _markerID;
    long long _position;
    unsigned long long _type;
    long long _number;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long markerID;
@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long number;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_decodeTypeAndBarsFromName;
- (id)encodeAsDictionary;
- (id)initWithName:(id)arg1 markerID:(long long)arg2 position:(long long)arg3;

@end
