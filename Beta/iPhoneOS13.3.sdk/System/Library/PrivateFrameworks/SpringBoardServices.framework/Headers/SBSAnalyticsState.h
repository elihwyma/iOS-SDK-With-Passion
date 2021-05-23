/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject

{
    double _timestamp;
    NSDictionary *_payload;
}

@property (nonatomic, readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withTimestamp:(double)arg1 payload:(id)arg2;
+ (id)withTimestamp:(double)arg1;

- (id)objectForKeyedSubscript:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTimestamp:(double)arg1 payload:(id)arg2;
- (id)coreAnalyticsRepresentation;

@end
