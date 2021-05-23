/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PCSMTT;

@interface PCSMTTPoint : NSObject

{
    _Bool _success;
    NSString *_name;
    double _time;
    PCSMTT *_mtt;
    NSDate *_start;
}

@property (weak) PCSMTT *mtt;
@property (retain) NSDate *start;
@property (retain) NSString *name;
@property (readonly) double time;
@property (readonly) _Bool success;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)complete:(_Bool)arg1;
- (void)complete:(_Bool)arg1 time:(double)arg2;
- (id)initWithMTT:(id)arg1 name:(id)arg2;
- (id)jsonDict;

@end
