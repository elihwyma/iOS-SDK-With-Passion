/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface BRCProblem : NSObject <Swift>

{
    int _type;
    NSSet *_effectedRecordNames;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSSet *effectedRecordNames;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProblem:(id)arg1;
- (id)initWithType:(int)arg1 recordName:(id)arg2;
- (void)mergeWithProblem:(id)arg1;

@end
