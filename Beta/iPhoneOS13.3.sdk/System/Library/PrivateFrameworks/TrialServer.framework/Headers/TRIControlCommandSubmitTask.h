/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol TRITask;

@interface TRIControlCommandSubmitTask : NSObject

{
    id <TRITask> _task;
    NSNumber *_result;
}

@property (readonly) id <TRITask> task;
@property (retain, nonatomic) NSNumber *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)commandWithTask:(id)arg1;

- (_Bool)run;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1;

@end
