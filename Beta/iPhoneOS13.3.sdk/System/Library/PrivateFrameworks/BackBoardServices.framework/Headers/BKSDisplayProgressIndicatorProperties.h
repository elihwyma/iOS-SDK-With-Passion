/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSString;

@interface BKSDisplayProgressIndicatorProperties : NSObject <Swift>

{
    long long _style;
    struct CGPoint _position;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) struct CGPoint position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)progressIndicatorWithStyle:(long long)arg1 position:(struct CGPoint)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithStyle:(long long)arg1 position:(struct CGPoint)arg2;

@end
