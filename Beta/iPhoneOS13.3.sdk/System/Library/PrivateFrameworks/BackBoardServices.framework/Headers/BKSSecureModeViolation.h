/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface BKSSecureModeViolation : NSObject <Swift>

{
    NSNumber *_processId;
    NSArray *_contextIds;
    NSDictionary *_layerNamesByContext;
}

@property (retain, nonatomic) NSNumber *processId;
@property (copy, nonatomic) NSArray *contextIds;
@property (copy, nonatomic) NSDictionary *layerNamesByContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithProcessId:(id)arg1 contextIds:(id)arg2;

@end
