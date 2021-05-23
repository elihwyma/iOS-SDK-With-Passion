/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMUserIdentity : FATObject

{
    NSNumber *_type;
    NSString *_stringIdentifier;
    NSNumber *_longIdentifier;
}

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *stringIdentifier;
@property (retain, nonatomic) NSNumber *longIdentifier;

+ (id)structName;
+ (id)structFields;

@end
