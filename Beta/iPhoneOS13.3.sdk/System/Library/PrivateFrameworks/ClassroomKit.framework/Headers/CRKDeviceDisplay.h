/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CRKDeviceDisplay : NSObject

{
    double _scaleFactor;
    unsigned long long _orientation;
    NSString *_frameString;
    struct CGRect _frame;
}

@property (nonatomic, readonly) NSString *frameString;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithScaleFactor:(double)arg1 frame:(struct CGRect)arg2 orientation:(unsigned long long)arg3;
- (id)initWithScaleFactor:(double)arg1 width:(double)arg2 height:(double)arg3 orientation:(unsigned long long)arg4;

@end
