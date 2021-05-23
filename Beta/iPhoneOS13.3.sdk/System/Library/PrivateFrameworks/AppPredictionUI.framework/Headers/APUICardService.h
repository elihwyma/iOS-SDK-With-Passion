/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface APUICardService : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *serviceIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)canSatisfyCardRequest:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
