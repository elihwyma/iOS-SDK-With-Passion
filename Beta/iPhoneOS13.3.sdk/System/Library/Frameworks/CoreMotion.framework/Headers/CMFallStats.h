/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CMFallStats : NSObject

{
    NSData *_data;
    _Bool _isNearFall;
    int _fallType;
    double _iOStime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double iOStime;
@property (nonatomic, readonly) int fallType;
@property (nonatomic, readonly) _Bool isNearFall;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (void)_decodeMeta;
- (id)initWithBufferAndLength:(char *)arg1 length:(unsigned long long)arg2;
- (id)itemsIterator;
- (id)sr_exportRepresentationEnumerator;

@end
