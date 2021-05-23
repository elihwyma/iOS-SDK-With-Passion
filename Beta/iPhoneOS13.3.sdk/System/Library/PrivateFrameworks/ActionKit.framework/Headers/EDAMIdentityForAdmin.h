/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMIdentityForAdmin : FATObject

{
    EDAMIdentity *_identity;
    NSNumber *_state;
    NSNumber *_stateChanged;
}

@property (retain, nonatomic) EDAMIdentity *identity;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *stateChanged;

+ (id)structName;
+ (id)structFields;

@end
