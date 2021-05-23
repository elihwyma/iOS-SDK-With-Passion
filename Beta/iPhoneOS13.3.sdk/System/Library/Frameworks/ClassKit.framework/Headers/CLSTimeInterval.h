/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject

{
    NSDate *_startTime;
    double _length;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) double length;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;

@end
