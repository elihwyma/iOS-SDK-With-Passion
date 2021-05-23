/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CMData : NSObject

{
    _Bool _isSent;
    double _timestamp;
    long long _type;
    NSData *_data;
    NSString *_sourcePeerDisplayName;
}

@property double timestamp;
@property long long type;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *sourcePeerDisplayName;
@property _Bool isSent;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
